/*

   Pattern to print is as below 

   *  
  ***  
 *****
*******
 *****
  ***
   *

*/


#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("enter number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<(n/2+k+1)&& j>(n/2-k+1))
				printf("*");
			else
				printf(" ");

			

		}
			if(i<(n/2)+1)
				k++;
			else
				k--;
		printf("\n");
	}
	return 0;
}
