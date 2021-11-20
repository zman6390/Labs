#include<stdio.h>
#include<stdlib.h>
//make main function for swapping variables
int main()
{
//dynamic allocation to help with character's value
char *Sent1 = malloc(sizeof(char)*10000);
//define a function to allocate size of second sentence
char *Sent2 = malloc(sizeof(char)*10000);
//to swap the sentences take the input and print the given sentence value
printf("Enter the 1st sentence:");
scanf("%[^\n]%*c",Sent1);
//print and read second sentence
printf("Enter the 2nd sentence:");
scanf("%[^\n]%*c",Sent2);
//calculate the value of both sentences and assign it to Sent1
Sent1=Sent1+(Sent1-Sent2);
//divide the subtraction value by 2 and assign it to Sent2
Sent2=Sent1-(Sent1-Sent2)/2;
//multiply the subtraction value by 2 and assign the final value to Sent1
Sent1=Sent1-(Sent1-Sent2)*2;
//print given sentence and final sentence
printf("The final result after swapping the sentence data:\n");
printf("After swapping the 1st sentence=%s\n",Sent1);
printf("After swapping the 2nd sentence=%s\n",Sent2);
//return final
return 0;
}
