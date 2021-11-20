#!/bin/bash
function find_statements() {
        # Initialize array index counter
        i=0
        # Iterate over period separation and read in array
        while IFS=. read -r -a line
        do
        IFS="."
                # Iterate over each elements of array 
                for stat in ${line[@]}
                do
                        # Assign the element to array 
                        statements[i]=$(echo $stat | sed 's/^ //g')
                        # Increment counter
                        i=$((i+1))
                done
        done < $1
        
        # Display the table header
        echo -e "\t\tWords\tletters"
        # Initilize the array counter
        i=1
        
        # Iterate over elements of statement
        for statement in ${statements[@]}
        do
                # Count number of words and letters
                words=$(echo $statement | wc -w)
                letters=$(echo $statement | tr -d ' ' | wc -c)
                # Display the words and letters count
                echo -e "Statement $i:\t  $words\t  $((letters-1))"
                # Increment the counter by 1
                i=$((i+1))
        done
}

# Check if argument is passed
if(($#==1))
then
        # set file to $1
        file=$1
else
        # prompt the user for a file
        echo -n "Text file: "
        read file
fi

# Check if the file exists
if [ -f $file ]
then
        # call the function
        find_statements $file
else
        # display error and exit
        echo "$file: file not exist"
        exit 1
fi
