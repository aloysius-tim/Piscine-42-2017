#! /bin/sh

ldapsearch  -LLL "(uid=z*)" cn | sed '/cn/!d' | sed -e 's/cn: //g' | sort -r
