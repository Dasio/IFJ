#!/bin/bash

c_red=`tput setaf 1`
c_green=`tput setaf 2`
c_normal=`tput sgr0`

echo -e "${c_green}Starting test ..."

for f in `ls -1 playground/test_sources`
do
	echo -en "$c_normal"
	code=`echo $f | sed 's/.*_\([0-9]*\).ifj/\1/'`
	./ifj playground/test_sources/$f > /dev/null 2> /dev/null
	retcode="$?"
	[ "$retcode" -eq "$code" ] && echo "${c_green}$f OK${c_normal}" ||
							echo "${c_red}$f FAIL, received ${retcode}${c_normal}"
done
