#include<stdio.h>
int main()
{
	int num,iPos,bit_size,bit_val;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("%d's Bit Pattern:",num);
	
	bit_size = sizeof(num)*8;
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}

	printf("\n");

	

}
