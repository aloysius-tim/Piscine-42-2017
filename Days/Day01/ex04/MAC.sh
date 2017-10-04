#! /bin/sh

ifconfig | grep -E '[0-9a-zA-Z]{2}:[0-9a-zA-Z]{2}:[0-9a-zA-Z]{2}:[0-9a-zA-Z]{2}:[0-9a-zA-Z]{2}:[0-9a-zA-Z]{2}' | sed 's/.*ether //g' | sed 's/ //';
