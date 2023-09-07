#include<stdio.h>
int main()
{
	int num,pos,iPos,bit_size,bit_val;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("%d's Bit Pattern:",num);
	
	bit_size = sizeof(num)*8;
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}

	printf("\nEnter Position of bit to flip\n");
	scanf("%d",&pos);	
	
	num = num ^ (1<<pos);

	printf("\n%d's Bit Pattern:",num);
	
	for(iPos=bit_size-1;iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", (num >>iPos)&1);
	}

	printf("\n");

	

}
