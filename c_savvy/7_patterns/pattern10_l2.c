/*
   Pattern to print is as below
*
**
***
****
*****
****
***
**
*

*/


#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	printf("enter number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<=n/2+1)
			k++;
		else
			k--;
		for(j=1;j<=n/2+1;j++)
		{

			if(j<=k)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}
	return 0;
}
