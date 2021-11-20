#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
//declared MAX_MSG_LEN to 80
#define MAX_MSG_LEN 80
//declaration of function get_msg
void get_msg(char [],int *);
//declaration of function palindrome
bool palindrome(char[],int);
//main function
int main()
{
 char str[MAX_MSG_LEN];
 int n;
  bool b;
 //calling the function get_msg with two parameters,one is char array and address of n
 get_msg(str,&n);
 //calling the function palindrome,function returns 1 or 0,if it is 1,given message is palindrome,if it is 0,given message is not a palindrome
 b = palindrome(str,n);
 if(b == 1)
 {
 printf("Palindrome");
 }
 else
 {                                                                                printf("Not a palindrome");                                                                                    }
 }                                                                                 //definition of function get_msg
                                                                              void get_msg(char str[],int *n)
                                                                                    {
                                                                                        char ch ;
                                                                                            *n = 0;
                                                                                        printf("Enter the message:\n");
                                                                                 //This loop will repeat until user enter newline character
                                                                                while((ch =getchar()) != '\n')                                                 
{
//isalpha is used to check given character is in the  alphabet or not. This return non zero value,if given character is alphabet.If given character is not alphabet,then it return 0
 if(isalpha(ch)!=0)
                                                                                   {
                                                                                                                                                                //store each character into the array
                                                                                                                                                                             str[*n] = ch;                                                                   *n=*n+1;                                                        }                                                                          }                                                                          //load null character at the end of the messagr
   str[*n] = '\0';                                                                                                                                              }                                                                                                                                                               //definition of palindrome
    bool palindrome(char str[],int n)
 {                                                                                int *i,*j,k = 0;
                                                                                 n = n-1;
                                                                                 i = &k;
                                                                                 j = &n;                                                                                                                                                         //loop to check if palindrome
while(*j>*i)
{                                                                                                                                                                                                                             //This condition will check the first and last character.Then increase the position of the index,this will repeat untill n > i.If first and last characters are not equal then it return 0

                                                                                                                                                                                                                                                if(toupper(str[*j]) != toupper(str[*i])) 
{                                                                                                                                                                                                                                               return 0;
}                                                                                                                                                                                                                                                      *j = *j-1;                                                                                                                                                                                                                                      *i = *i+1;
 }                                                                                                                                                               //If the above is not satisfy,given message is palindrome,Then return 1
                                                                                                                                                                             return 1;
}                                                                                                                                                                                                                                                                                                                       
