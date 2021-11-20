#!/bin/sh
#Zack Davis
#Shell script to find entry
echo -n "Provide the name of the person to find information:"
read query

echo "Name;Address;Phone number"
grep -i $query phonebook.txt
