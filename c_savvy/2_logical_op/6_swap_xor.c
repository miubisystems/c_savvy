#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers\n");
	scanf("%d %d",&num1,&num2);
	printf("Before Swap num1=%d and num2=%d\n",num1,num2);

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;

	printf("After Swap num1=%d and num2=%d\n",num1,num2);


}
