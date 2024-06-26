# -*- Makefile -*-
# $Id$

include $(ACE_ROOT)/include/makeinclude/platform_linux_common.GNU

ifeq ($(insure),0)
  CC  ?= gcc
  CXX ?= g++
  CXX_FOR_VERSION_TEST ?= $(CXX)
else
  CXX_FOR_VERSION_TEST ?= g++
endif

CXX_FULL_VERSION := $(shell $(CXX_FOR_VERSION_TEST) --version)
CXX_VERSION := $(shell $(CXX_FOR_VERSION_TEST) -dumpversion)

ifeq (Ubuntu, $(findstring Ubuntu,$(LSB_RELEASE_ID)))
  ifeq (7.10, $(findstring 7.10,$(LSB_RELEASE_RELEASE)))
    no_hidden_visibility ?= 1
  endif
  ifeq (7.04, $(findstring 7.04,$(LSB_RELEASE_RELEASE)))
    no_hidden_visibility ?= 1
  endif
endif
ifeq (Red Hat, $(findstring Red Hat,$(CXX_FULL_VERSION)))
  ifeq (4.1.1, $(findstring 4.1.1,$(CXX_VERSION)))
    gcc_template_instantiation_visibility ?= 1
  endif
  ifeq (4.1.2, $(findstring 4.1.2,$(CXX_VERSION)))
    gcc_template_instantiation_visibility ?= 1
  endif
endif
# Mandriva 2007
ifeq (4.1.1-3mdk, $(findstring 4.1.1-3mdk,$(CXX_FULL_VERSION)))
  gcc_template_instantiation_visibility ?= 1
endif

ifeq ($(buildbits),32)
  FLAGS_C_CC += -m32
  LDFLAGS    += -m32
endif
ifeq ($(buildbits),64)
  FLAGS_C_CC += -m64
  LDFLAGS    += -m64
endif

# DT_RUNPATH is preferred over DT_RPATH, but the linker will only use it when
# this extra flag option (enable-new-dtags) is present
LD_RPATH_FLAGS += -Wl,--enable-new-dtags

# Rely on _GNU_SOURCE to set these defaults defined in /usr/include/features.h
# instead of setting them directly here (older versions of gcc don't set it
# for you): _SVID_SOURCE _BSD_SOURCE _POSIX_SOURCE _POSIX_C_SOURCE=199506L, ...
CPPFLAGS += -D_GNU_SOURCE

DCFLAGS  += -ggdb
DCCFLAGS += -ggdb
DLD      = $(CXX)
LD       = $(CXX)

ifeq ($(dynamic_loader),0)
  CPPFLAGS += -DACE_HAS_DYNAMIC_LINKING=0
else
  LIBS     += -ldl
endif

ifeq ($(threads),1)
  FLAGS_C_CC += -pthread
  SOFLAGS += -pthread
  LIBS += -lrt
endif

ifeq ($(optimize),1)
  SOFLAGS += -Wl,-O3
endif

ifeq ($(static_stdlibs),1)
  LDFLAGS += -static-libgcc -static-libstdc++
endif

SOFLAGS += -shared
SOBUILD = $(COMPILE.cc) $(PIC) -o $(VSHDIR)$*.so $<; \
          $(SOLINK.cc) -o $@ $(LDFLAGS) $(VSHDIR)$*.o
PRELIB  = @true

# Test for template instantiation, add to SOFLAGS if SONAME set,
# add -E to LDFLAGS if using GNU ld
#
include $(ACE_ROOT)/include/makeinclude/platform_g++_common.GNU

# TAO with GCC 4.0.2 and -O3 seems to result in runtime issues, for example
# the ForwardRequest PI test will fail. For GCC 4.0.2 we default to -O2
ifeq ($(CXX_VERSION),4.0.2)
  OCFLAGS ?= -O2
  OCCFLAGS ?=-O2
else
  OCFLAGS ?= -O3
  OCCFLAGS ?= -O3
endif

#### GNU gas has a string limit of 4096 characters.  On Alphas,
#### builds will fail due to running over that limit.  There are
#### at least two workarounds:
#### 1) Change the limit to 8192 characters and rebuild gas.  See
####    ACE-INSTALL.html for more information.
#### 2) Don't use -g when compiling those files.
#### If you're building on an Alpha and you haven't hacked and
#### rebuilt gas, you might need to uncomment the following.
#### ifeq ($(debug),1)
####   SUPPRESS_DASH_G = 1
#### endif # debug
