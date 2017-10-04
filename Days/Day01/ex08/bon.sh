#! /bin/sh

ldapsearch -LLL "(sn=*bon*)" -u | sed '/^\n*$/d' | wc -l | sed -e 's/^[^0-9]*//'
