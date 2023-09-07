#include<stdio.h>

int main()
{
	int num,iPos,bit_size,bit_val;
	printf("Enter number to know its parity\n");
	scanf("%d",&num);
	printf("%ds Bit Pattern:",num);
	
	bit_size = sizeof(num)*8;
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}
	
	if(((num >> (bit_size-1)) & 1) == 1)
		printf("negative\n");
	else
		printf("positive\n");
		
	return 0;
	

}
