#include<stdio.h>

#include <string.h>

// main

 int main()
 {
 // declare variables.

 char ch[20];

 int len,points=100;
int lower_count=0,upp_count=0,num_count=0,consec_count=0;

// input password

 printf("Enter a password : ");

 scanf("%s", ch);

 len=strlen(ch);//check length of password

 // check lower case condition

 for(int i=0;i<len;i++)
 {
 if(ch[i]>='a' && ch[i] <= 'z')
 {
lower_count +=1; 
}
}
if(lower_count <=0)
{
points -=20; //decrease the points by 20
}
 // check capital letter  condition
 for(int i=0;i<len;i++)
{
if(ch[i]>='A' && ch[i] <='Z')
{
upp_count +=1;
}
}
if(upp_count<2)//we want a minimum of 2 upper case in the password
{
points -=20; //decrease by 20
}
//check number condition
for(int i=0;i<len;i++)
{
if(ch[i] >='0' && ch[i]<='9')
{
num_count +=1;
}
}
if(num_count <=0)//password needs at least one number
{
points -=20;//decrease by 20
}
//check consecutive condition
for(int i=0;i<len;i++)
{
for(int j=i+1;j<len;j++)
{
//check if the next character is consecutive or not by checking if the two values are greater than one step apart in ASCII value
if(ch[j]-ch[i]==1)
{
consec_count +=1;
}
}
}
if(consec_count >2)//when there are more than 2 consecutive characters decrease
{
points -=20;
}
 if(points<70)
 {
 // display values
 printf("Deductions: %d \nThe password is unsafe! Please reset.", points);
 }
 else{
 // display values
 printf("The password is safe.");
 }
 return 0;
}
