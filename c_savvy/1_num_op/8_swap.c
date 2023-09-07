#include<stdio.h>
int main()
{
	float a,b,c;
	a=0;
	b=0;
	c=0;
	int choice=0;

	printf("Enter a\n");
	scanf("%f",&a);

	printf("Enter b\n");
	scanf("%f",&b);

	printf("Use 3rd Variable ? 1 For Yes 0 For No\n");
	scanf("%d",&choice);
	printf("Before Swap a=%f,b=%f\n",a,b);
	
	if(choice == 1){
		
		c=a+b;
		b=c-b;
		a=c-b;
	}
	else if(choice == 0){
		
		a=a+b;
		b=a-b;
		a=b-a;	
	}
	else
	{
		printf("Invalid Choice\n");
	
	}

	printf("After Swap a=%f,b=%f\n",a,b);
	return 0;
}
