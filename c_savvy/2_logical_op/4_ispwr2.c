#include<stdio.h>
int main()
{
	int num,res;
	printf("Enter number if its power of two\n");
	scanf("%d",&num);
	res = num & (num-1);	
	if(res==0)
		printf ("number is power of two\n");
	else 
		printf("number is not power of two\n");

}
