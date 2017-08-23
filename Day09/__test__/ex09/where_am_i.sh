if [[ -z `ifconfig | grep "inet  *" | cut -d " " -f 2 | grep -v 127.0.0.1` ]]
then
	echo "Je suis perdu!"
else
	echo "`ifconfig | grep "inet  *" | cut -d " " -f 2 | grep -v 127.0.0.1`"
fi
