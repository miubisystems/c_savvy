#include<stdio.h>
int main(){

	int num,rem,rev=0;
	printf("Enter a number to find its reverse\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem = num%10;
		rev = rev*10 +rem;
		num = num/10;
	}
	printf("Reverse of given number is %d\n", rev);


}
