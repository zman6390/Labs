#!/bin/bash
# Check Error Script 

echo "Try to find out some errors!!!"
 
#Search for the words which can be matched by regex [^a]*ce
#And save the output to file "Result"
echo "The regex [^a]*ce can match the string(s):" >Result
grep '^[^a]*ce$' << END >> Result
lance 
ace
brace
decide
piece
-ENDHERE

# Check the existence of file "Result"
# Send the content in "Result" to your emailbox
# $1 is replaced by your campusID

ls  mail zdavis20 < Result

# $1 is replace by your campusID
echo "The result has been sent to zdavis20@student.gsu.edu"
echo "Congratulations! you have corrected all the errors!"
END
