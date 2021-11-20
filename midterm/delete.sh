#!/bin/sh
#Zack Davis
#shell script to delete entries
BOOK="phonebook.txt"
echo -n "Provide the name of the person whose record you want to delete:"
read -r name
cp $BOOK temp
grep -vw $name $BOOK>temp
sort -nk1 temp>$BOOK


