#include<stdio.h>
int main()
{
	int num;
	printf("Enter number to find even or odd\n");
	scanf("%d",&num);
	
	if(!(num&1))
		printf ("number is even\n");
	else 
		printf("number is odd\n");

}
