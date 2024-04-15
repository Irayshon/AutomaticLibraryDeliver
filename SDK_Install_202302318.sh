#!/bin/bash
res=$(find . -name "AUV_SDK_*.zip")
environment_file[0]=/etc/profile
environment_file[1]=~/.bashrc
environment_file[2]=/etc/rc.local
fixed_path=~
environment_array[0]='export PATH=~/AUV_SDK/linux-gnu/lcm/bin:$PATH'
environment_array[1]='export LD_LIBRARY_PATH=~/AUV_SDK/linux-gnu/lcm/lib:$LD_LIBRARY_PATH'
environment_array[2]='export LD_LIBRARY_PATH=~/AUV_SDK/linux-gnu/rcf/lib:$LD_LIBRARY_PATH'
environment_array[3]='export LD_LIBRARY_PATH=/root/AUV_SDK/Aarch64/lib:$LD_LIBRARY_PATH'
environment_array[4]='export LD_LIBRARY_PATH=/root/AUV_SDK/Aarch64/rcf/lib:$LD_LIBRARY_PATH'
environment_array[5]='export LD_LIBRARY_PATH=/root/AUV_SDK/Aarch64/uuid/lib:$LD_LIBRARY_PATH'
environment_array[6]='export LD_LIBRARY_PATH=/root/AUV_SDK/Aarch64/ncurses/lib:$LD_LIBRARY_PATH'
environment_array[7]='export LD_LIBRARY_PATH=/root/AUV_SDK/Aarch64/iceoryx/lib:$LD_LIBRARY_PATH'
environment_array[8]='export LD_LIBRARY_PATH=/root/AUV_SDK/Aarch64/acl/lib:$LD_LIBRARY_PATH'
environment_array[9]='export LD_LIBRARY_PATH=/root/AUV_SDK/Aarch64/attr/lib:$LD_LIBRARY_PATH'
environment_array[10]='ifconfig lo multicast'
environment_array[11]='route add -net 224.0.0.0 netmask 240.0.0.0 dev lo'
environment_array[12]='export LCM_DEFAULT_URL=udpm://239.255.76.67:7667?ttl=10'
environment_array[13]='ifconfig eth0 multicast'
environment_array[14]='route add -net 239.255.76.67 netmask 255.255.255.255 dev eth0'
num=0
index=0
Platform_flag=1
flag=true
fileList=
for r in $res
do
	fileList[$num]=$r
	num=$(($num+1))
	echo "$num.$r"
done
if
	[ $num -eq 0 ]
then
	echo "无法找到SDK!"
else
	echo "选择要安装的SDK序号，进行安装："
	read user_choice
	while $flag
	do
		expr $user_choice + 0 &>/dev/null
		[ $? -eq 0 ] && flag=false || read -p "输入错误，请重新输入:" user_choice
	done
	if
		[ $user_choice -eq 0 ]||[ $user_choice -gt $num ]
	then
		echo "输入错误！"
	else
		((index=$user_choice-1))
		flag=true
		echo "选择安装平台，进行安装："
		echo "1.开发平台"
		echo "2.运行平台"
		read Platform_flag
		while $flag
		do
			expr $Platform_flag + 0 &>/dev/null
			[ $? -eq 0 ] && flag=false || read -p "输入错误，请重新输入:" Platform_flag
		done
		if
			[ $Platform_flag -eq 0 ]||[ $Platform_flag -gt 2 ]
		then
			echo "输入错误！"
		else
			rm -rf "$fixed_path"/AUV_SDK
			if [ $Platform_flag -eq 1 ] ;then
				unzip -d $fixed_path ${fileList[$index]}
				grep "${environment_array[0]}" ${environment_file[1]} > /dev/null
				if [ $? -ne 0 ] ;then
					echo ${environment_array[0]} >> ${environment_file[1]}
					source ${environment_file[1]}
				fi
				grep "${environment_array[1]}" ${environment_file[1]} > /dev/null
				if [ $? -ne 0 ] ;then
					echo ${environment_array[1]} >> ${environment_file[1]}
					source ${environment_file[1]}
				fi
				grep "${environment_array[2]}" ${environment_file[1]} > /dev/null
				if [ $? -ne 0 ] ;then
					echo ${environment_array[2]} >> ${environment_file[1]}
					source ${environment_file[1]}
				fi
				grep "${environment_array[12]}" ${environment_file[1]} > /dev/null
				if [ $? -ne 0 ] ;then
					echo ${environment_array[12]} >> ${environment_file[1]}
					source ${environment_file[1]}
				fi
			else
				unzip -d $fixed_path ${fileList[$index]} "AUV_SDK/Aarch64/*"
				for ((i=0; i<=1; i++))
				do
					grep "${environment_array[3]}" ${environment_file[i]} > /dev/null
					if [ $? -ne 0 ] ;then
					echo ${environment_array[3]} >> ${environment_file[i]}
					source ${environment_file[i]}
					fi
					grep "${environment_array[4]}" ${environment_file[i]} > /dev/null
					if [ $? -ne 0 ] ;then
						echo ${environment_array[4]} >> ${environment_file[i]}
						source ${environment_file[i]}
					fi
					grep "${environment_array[5]}" ${environment_file[i]} > /dev/null
					if [ $? -ne 0 ] ;then
						echo ${environment_array[5]} >> ${environment_file[i]}
						source ${environment_file[i]}
					fi
					grep "${environment_array[6]}" ${environment_file[i]} > /dev/null
					if [ $? -ne 0 ] ;then
						echo ${environment_array[6]} >> ${environment_file[i]}
						source ${environment_file[i]}
					fi
					grep "${environment_array[7]}" ${environment_file[i]} > /dev/null
					if [ $? -ne 0 ] ;then
						echo ${environment_array[7]} >> ${environment_file[i]}
						source ${environment_file[i]}
					fi
					grep "${environment_array[8]}" ${environment_file[i]} > /dev/null
					if [ $? -ne 0 ] ;then
						echo ${environment_array[8]} >> ${environment_file[i]}
						source ${environment_file[i]}
					fi
					grep "${environment_array[9]}" ${environment_file[i]} > /dev/null
					if [ $? -ne 0 ] ;then
						echo ${environment_array[9]} >> ${environment_file[i]}
						source ${environment_file[i]}
					fi
					grep "${environment_array[12]}" ${environment_file[i]} > /dev/null
					if [ $? -ne 0 ] ;then
						echo ${environment_array[12]} >> ${environment_file[i]}
						source ${environment_file[i]}
					fi
				done
				grep "${environment_array[10]}" ${environment_file[2]} > /dev/null
				if [ $? -ne 0 ] ;then
					echo ${environment_array[10]} >> ${environment_file[2]}
					source ${environment_file[2]}
				fi
				grep "${environment_array[11]}" ${environment_file[2]} > /dev/null
				if [ $? -ne 0 ] ;then
					echo ${environment_array[11]} >> ${environment_file[2]}
					source ${environment_file[2]}
				fi
				grep "${environment_array[13]}" ${environment_file[2]} > /dev/null
				if [ $? -ne 0 ] ;then
					echo ${environment_array[13]} >> ${environment_file[2]}
					source ${environment_file[2]}
				fi
				grep "${environment_array[14]}" ${environment_file[2]} > /dev/null
				if [ $? -ne 0 ] ;then
					echo ${environment_array[14]} >> ${environment_file[2]}
					source ${environment_file[2]}
				fi
			fi
			echo "安装成功！"
		fi
	fi
fi
