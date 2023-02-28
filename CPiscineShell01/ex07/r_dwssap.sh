#!/bin/sh

cat /etc/passwd | grep -v '#' | awk "NR % 2 == 0" | rev | cut -d':' -f7 | sort -r | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'FT_LINE1 <= NR && FT_LINE2 >= NR' | tr '\n' ',' | sed "s/,/, /g" | sed "s/\(.*\), /\1./" | tr -d '\n'
