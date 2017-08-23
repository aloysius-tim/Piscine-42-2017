#! /bin/sh

(find . -type f && find . -type d) | wc -l | sed 's/ //g'
