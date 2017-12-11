#!/usr/bin/env bash
#portalble way
echo Hello World!
date=$(date)
#Ask user for input
read -p "Your note: " note
echo $date:  $note >> ~/note.txt
echo Note saved: $note
