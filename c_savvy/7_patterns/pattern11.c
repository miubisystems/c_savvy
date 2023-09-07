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
	int i,j,n;
	printf("enter number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n/2+1;j++)
		{
			if(i<=(n/2+1)){
				if(j>n/2+1-i)
					printf("*");
				else
					printf(" ");
			}
			else{
				if(j>=i-n/2)
					printf("*");
				else
					printf(" ");
			}

		}
		printf("\n");
	}
	return 0;
}
