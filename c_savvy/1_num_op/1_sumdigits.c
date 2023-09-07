#include<stdio.h>
int main()
{
 int num,result=0;
 printf("Enter a number to find sum of its digits\n");
 scanf("%d",&num);
 while(num > 0)
 {
 	result = result + num%10;
	num = num/10;
 }
 printf("Sum : %d\n", result);
}

