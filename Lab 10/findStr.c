#include<stdio.h>
#include<string.h>

int main(){
char smallest_word[20],largest_word[20];//make the string no longer than 20
int i=0;
char temp[20];
while(1){//while loop to enter word and copy to temp
printf("Enter word:");
scanf("%s",temp);
if(i==0){
strcpy(smallest_word,temp);
strcpy(largest_word,temp);
}
else{//if else loop to compare the smallest word with the word entered and if it's smaller make it the new smallest word
if(strcmp(temp,smallest_word)<0){
strcpy(smallest_word,temp);
}
if(strcmp(temp,largest_word)>0){//if else loop to compare the largest word with the word entered and if  it's larger make it the new largest word
strcpy(largest_word,temp);
}
}
if(strlen(temp)==4){//if statement to stop input if the word entered is 4 characters long
break;
}
i++;
}
printf("Smallest word:%s\n",smallest_word);//once the program breaks the loop print out the results.
printf("Largest word:%s\n",largest_word);
}
