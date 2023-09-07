#include<stdio.h>
int main()
{
	int num,ones,zeros;
	printf("Enter number to count 1s and 0s\n");
	scanf("%d",&num);
	while(num>0){
		if(num & 1)
			ones++;
		else
			zeros++;
		num = num>>1;
	
	}
	printf ("number of 1s = %d 0s = %d",ones,zeros);


}
