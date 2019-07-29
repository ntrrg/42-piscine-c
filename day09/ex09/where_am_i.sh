#!/bin/sh

IP="$(ifconfig | grep "inet " | cut -d " " -f 2)"

if [ -z "$IP" ]; then
	echo "I am lost!"
else
	echo "$IP"
fi
