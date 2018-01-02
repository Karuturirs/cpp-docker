#!/bin/sh
#portalble way
echo Hello World!
#Ask user for input
#read  note
echo "ravi" >> /cygdrive/c/work/github/cpp-docker/src/note.txt
echo "Note saved: "

function hi(){
        x=$1
        if [ -z "$x" ]; then
           echo "Connecting you to devhqGEMINI"
           ssh rkaruturi@devhqgemini
        else
           echo "Connecting you to $x"
           ssh rkaruturi@$1
        fi
}

function start(){
        x=$1
        if [ -z "$x" ]; then
          echo "default port for you is 8920, Killing the process running on it"

        else

        fi
}

ps -ef | grep 8920; fuser -k -n tcp 8920
