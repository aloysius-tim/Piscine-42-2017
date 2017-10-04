#!/bin/sh

#ldapsearch -LLL "(uid=$USER)" -u
ldapwhoami | sed 's/dn://'
