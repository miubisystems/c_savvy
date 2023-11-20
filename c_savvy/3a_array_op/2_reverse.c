/*
 *Input : User Enters an array of numbers, Element of the Array
 *Output: Array of Eleemnts are printed in Reverse
 *
 * */
#include<stdio.h>
int main()
{
int size, i,j,tmp;
printf("Enter Size of Array\n");
scanf("%d",&size);
int num_arr[size];
printf("Enter Array elements\n");
for(i=0;i<size;i++)
	scanf("%d",&num_arr[i]);
for(i=0,j=(size-1);i<j;i++,j--)
{
	tmp = num_arr[i];
	num_arr[i]=num_arr[j];
	num_arr[j]= tmp;
}
printf("Reversed array elements\n");

for(i=0;i<size;i++)
	printf("%d ", num_arr[i]);
}
