/*
 *Input : User Enters an array of numbers, Element of the Array
 *Output: Minimum and Maximum of array
 *
 * */
#include<stdio.h>
int main ()
{
int size,min,max,i;
printf("Enter Size of array\n");
scanf("%d",&size);

int num_array[size];

printf("Enter Elements\n");
for(i=0;i<size;i++)
	scanf("%d",&num_array[i]);

min = num_array[0];
max = num_array[0];

for(i=1;i<size;i++)
{
if(min > num_array[i])
	min = num_array[i];
if(max < num_array[i])
	max = num_array[i];
}

printf("Min is %d, Max is %d", min, max);



}
