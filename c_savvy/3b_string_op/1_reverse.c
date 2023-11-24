/*Write a program to reverse a String*/

#include<stdio.h>
int main(void)
{
char input[100];
char temp;
printf("Enter a string to reverse\n");

//make use of scanf
scanf("%99s",input);

int len=0,i=0,j=0;
//find string length
while(input[len]!='\0')
	len++;

for(i=0,j=len-1;i<j;i++,j--)
{
temp = input[i];
input[i]=input[j];
input[j]=temp;
}

printf("%s",input);

return 0;
}
