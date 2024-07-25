#!/bin/sh

cat /etc/passwd | grep -v "#" | sed -n '3~2p' | cut -d ":" -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | awk '{ printf "%s%s", (NR==1 ? "" : ", "), $0 } END { printf "." }' | tr -d '\n'
