/*
 *Least Common Multiple
 *Lets take two numbers
 *4 :4, 8, 12, 16, 20, 24, 28, 32, 36, 40..  are its multiples
 *6 :6, 12,18, 24, 30, 36, 42, 48, 54, 60..  are its multiples
 * 12,24,36 are common common among which 12 is the least
 * so 12 is the LCM
 * */

#include<stdio.h>
int main()
{
	int a,b,L;
	printf("Enter two numbers to find their LCM\n");
	scanf("%d %d",&a,&b);
	for ( L = a>b ?a : b ; ; L++)
		if(L%a==0 && L%b==0)
			break;
	printf("LCM is %d\n",L);


return 0;
}
