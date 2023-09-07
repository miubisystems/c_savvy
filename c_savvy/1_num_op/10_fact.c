#include<stdio.h>
int fact(int n)
{
if (n==0)
	return 1;
else
	return n*fact(n-1);
}
int main()
{

	int n,choice,result=1,i;
	printf("Enter n\n");
	scanf("%d",&n);

	printf("Enter Choice 1- normal,0-recursive");
	scanf("%d",&choice);
	
	if(choice == 1){
	for(i=0;;i++){
		if (n==0)
			break;
	result=result*(n);
	n=n-1;
	}	
	printf("Normal Result %d",result);
	}
	else if(choice == 0){
		result = fact(n);
	printf("Recursive Result%d",result);
	}
	else
	{
		printf("Invalid Choice\n");
	
	}


	return 0;
}
