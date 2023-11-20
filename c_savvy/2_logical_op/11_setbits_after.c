/*
You will be given a number and position from where the bits need to be set after for 5 bits
*/

#include<stdio.h>

int main()
{
	int num,iPos,bit_size,bit_val,bit_pos,i;
	printf("Enter number to display binary\n");
	scanf("%d",&num);

	printf("Enter bit pos from where the next 5 bits to right need to be set(31-0)\n");
	scanf("%d",&bit_pos);
	bit_size = sizeof(num)*8;
	printf("%ds Bit Pattern:\n",num);
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}
	printf("\n");

	for(i=0;i<=5&&i>=0;i++,bit_pos--)
		num |= (1<<bit_pos);
	
	printf("Post bit pattern change\n");
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}
	printf("\n");


}
