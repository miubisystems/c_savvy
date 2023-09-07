#include<stdio.h>

int main()
{
	int num,pos,iPos,bit_size,bit_val,rev_num=0;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("%ds Bit Pattern:",num);
	
	bit_size = sizeof(num)*8;
	for(iPos=(bit_size-1);iPos>=0;iPos--){
		bit_val = (num>>iPos) & 1;
		printf("%d ", bit_val);
	}
	
	for(iPos=0;iPos<bit_size;iPos++){
		if(num & (1 << iPos))
			rev_num= rev_num | (1<<((bit_size-1)-iPos));

	}

	printf("\n%ds Bit Pattern:",rev_num);
	
	for(iPos=bit_size-1;iPos>=0;iPos--){
		bit_val = (rev_num>>iPos) & 1;
		printf("%d ", (rev_num >>iPos)&1);
	}

	printf("\n");

	

}
