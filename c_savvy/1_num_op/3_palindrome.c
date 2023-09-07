#include<stdio.h>
int main(){

	int num,rem,rev=0, input;
	printf("Enter a number to find if its palindrome\n");
	scanf("%d",&num);
	input=num;
	while(num>0)
	{
		rem = num%10;
		rev = rev*10 +rem;
		num = num/10;
	}
	if (rev == input)
		printf("Entered Number is a palindrome\n");
	else
		printf("No its not\n");

}
