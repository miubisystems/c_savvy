#include<stdio.h>
int main(){

	int n,i,flag=0;

	printf("enter a number to find if its prime\n");
	scanf("%d",&n);

	if(n>=1){
		if (n == 1)
			flag =1;
		else if (n == 2)
			flag =0;
		else
		{
			for(i=2;i<=n/2;i++)
			{
				if(n%i == 0){
					flag = 1;
					break;
				}
			}
		}
	
	}
	else
	{
		printf("Invalid number\n");
		return 1;
	}

	if(flag == 1)
		printf("Its not a prime\n");
	else
		printf("Its a prime\n");
		
	

	


}
