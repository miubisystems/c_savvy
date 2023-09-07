#include<stdio.h>

int main()
{
	int num,pos,iPos,bit_size,bit_val,parity=0;
	printf("Enter number to know its parity\n");
	scanf("%d",&num);
	printf("%ds Bit Pattern:",num);
	
	bit_size = sizeof(num)*8;
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}
	
	for(iPos=0;iPos<bit_size;iPos++){
		if(num & (1<<iPos))
			parity = parity ^ 1;

	}

	if(parity == 1)
		printf("\nodd Parity that is parity bit 1\n");
	else
	
		printf("\nEven Parity that is parity bit 0\n");
		
	printf("\n");

	

}
