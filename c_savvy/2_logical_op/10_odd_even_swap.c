#include<stdio.h>

int main()
{
	int num,iPos,bit_size,bit_val,evenBits,oddBits,OddMask,EvenMask;
	printf("Enter number to swap even bits to odd and vice versa\n");
	scanf("%d",&num);
	printf("%ds Bit Pattern:\n",num);
	
	bit_size = sizeof(num)*8;
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}
	printf("\n");

	OddMask = 0x55555555;
	EvenMask= 0xAAAAAAAA;
	
	evenBits = EvenMask & num;
	oddBits  = OddMask & num;

	evenBits = evenBits >> 1;
	oddBits = oddBits << 1;

	num = evenBits | oddBits;

	printf("Post Swap:\n");

	bit_size = sizeof(num)*8;
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}
	printf("\n");


	

}
