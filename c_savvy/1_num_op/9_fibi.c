#include <stdio.h>
void fibi(int a,int b,int i){
	if(i==0)
		return;
	printf(" %d",a+b);
	fibi(b,a+b,i-1);
}



int main()
{

int a,b,c,limit,i,j,s1,s2;
char choice;
printf("Enter 2 Seed Values\n");
scanf("%d",&s1);
scanf("%d",&s2);
printf("Enter limit value to print up to\n");
scanf("%d",&limit);
c=0;
printf("with recursion ? Y/N");
scanf(" %c",&choice);
if (choice == 'N'){
	for(i=0;(a+b)<limit;i++){
		printf("%d %d ",s1,s2);
		a=s1,b=s2;
		for(j=0;j<i;j++){ 
			c=b+a;
			a=b;
			b=c;
			printf("%d ",c);
		}
		printf("\n");
}
}
else if(choice == 'Y' )
{
	for(i=0;i<limit;i++){
		printf("%d %d",s1,s2);
		a=s1,b=s2;
		fibi(a,b,i);
		printf("\n");
	}
		
}
else
{
printf("wrong choice character\n");
}
	

return 0;
}
