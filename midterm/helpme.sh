#!/bin/bash
echo "Type a command" #this will prompt user
read cmd_in #This will read the user input
#The grep command with q below checks for print command as 0(False) or 1(True)
if grep -q $cmd_in mandatabase.txt; then
grep $cmd_in mandatabase.txt; #if 1(True) then the grep <cmd eg sudo><filename> will print lines containing sudo
else
 echo "Sorry, I cannot help you"
fi 

