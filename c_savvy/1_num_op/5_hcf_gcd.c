/*
 *Highest Common factor or Greatest Common Divisor
 *Lets take two numbers
 *12 :1, 2, 3, 4, 6  are its divisors
 *32 :1, 2, 3, 4, 8, 16 are its divisors
 * 1,2,3,4  are common divisors among which 4 is the highest so
 * 4 is the GCD / HCF
 * */

#include<stdio.h>
int main()
{
	int a,b,H;
	printf("Enter two numbers to find their GCD/HCF\n");
	scanf("%d %d",&a,&b);
	for ( H = a < b ? a: b ; H >= 1; H--)
		if(a%H==0 && b%H==0)
			break;
	printf("GCD is %d\n", H);

return 0;
}
