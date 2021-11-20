#!/bin/sh
#Zack Davis 
#Add phonebook entry shell script
echo -n "Enter the name of the person:"
read -r name
echo -n "Provide the address of the person:"
read -r address
echo -n "Provide the phone number of the person:"
read -r number

echo "$name;$address;$number">>phonebook.txt
