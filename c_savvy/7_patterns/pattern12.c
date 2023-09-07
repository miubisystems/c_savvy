/*
   Pattern to print is as below 
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
 
*/


#include<stdio.h>
int main()
{
	int i,j,n,k1=0,k2;
	printf("enter number of rows\n");
	scanf("%d",&n);
	k2=n;
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
		if(i<(n/2+1)){
			k1++;k2--;
		}
		else{
			k1--;k2++;
		}
		for(j=1;j<=n;j++)
		{
			if(j<=k1)
				printf("%d",k1);
			else	
				printf(" ");
			
			if(j<=k2)
				printf(" ");
			else
				printf("%d",k2);


		}
		printf("\n");
	}
	return 0;
}
