/*
 *Input : User Enters an array of numbers, Element of the Array
 *Output: Sorted Output Array Making use of bubble sort	
 *
 * */
 #include<stdio.h>
int main()
{
int size, i,j,tmp,n;
printf("Enter Size of Array\n");
scanf("%d",&size);
int num_arr[size];
printf("Enter Array elements\n");
for(i=0;i<size;i++)
	scanf("%d",&num_arr[i]);
n=size;
for(i=0;i<size;i++,n--)
{
	for(j=0;j<n;j++)
	{
		if(num_arr[j]>num_arr[j+1])
		{
			tmp = num_arr[j];
			num_arr[j]=num_arr[j+1];
			num_arr[j+1]=tmp;
		}
	}
	
}
printf("Post Bubble Sort\n");
for(i=0;i<size;i++)
	printf("%d ",num_arr[i]);

}	
