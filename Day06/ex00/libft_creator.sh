#! /bin/bash

gcc -c *.c;
ar r libft.a ft*.o;
ranlib libft.a;
rm -f *.o;
