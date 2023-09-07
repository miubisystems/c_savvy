#include<stdio.h>
int main()
{
	int num,i,lim,res=0,rem;
	printf("Enter a limit to which amstrong nums to be printed");
	scanf("%d",&lim);
	for(i=10;i<lim;i++)
	{
	num = i;
	res = 0;
	while(num)
	{
		rem = num%10;
		res = res + rem*rem*rem;
		num = num/10;
	}
	if(res == i)
		printf("%d ",i);
	}
}
