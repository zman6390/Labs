#!/bin/bash
#Zack Davis/ file to find number of statements.
#function to find the statements
function find_statements() {
        # Initialize array index counter
        i=0
        # Iterate over period separation and read in array
        while IFS=. read -r -a line
        do
        IFS="."
                # Iterate over each element of array 
                for stat in ${line[@]}
                do
                        # Assign the element to array 
                        statements[i]=$(echo $stat | sed 's/^ //g')
                        # Increment counter
                        i=$((i+1))
                done
        done < $1
        
        echo "There are total ${#statements[@]} statements"
}

#check if argument is passed
if(($#==1))
then
        # Then, set file to $1
        file=$1
else
        # Else, prompt the user for a file
        echo -n "Text file: "
        read file
fi
if [ -f $file ]
then
        # call the function
        find_statements $file
else
        # display error and exit
        echo "$file: file not exist"
        exit 1
fi
