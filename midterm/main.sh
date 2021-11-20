#!/bin/sh
exit=0
while [ $exit -ne 1 ]
do 
echo -e "add,find,delete,exit:"
read -r input

if [ "$input" = "add" ]
then
sh ./entry.sh

elif [ "$input" = "find" ]
then
sh ./find.sh
elif [ "$input" = "delete" ]
then
sh ./delete.sh
elif [ "$input" = "exit" ]
then
exit=1
fi
done
exit 0

