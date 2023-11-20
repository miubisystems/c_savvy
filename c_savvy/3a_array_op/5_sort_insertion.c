/*
 *Input : User Enters an array of numbers, Element of the Array
 *Output: Sorted array, making using of Insertion sort
 *
 * */
 #include<stdio.h>
int main()
{
int size, i,j,tmp,s_index,cur,k;
printf("Enter Size of Array\n");
scanf("%d",&size);
int num_arr[size];
printf("Enter Array elements\n");
for(i=0;i<size;i++){
	scanf("%d",&num_arr[i]);
}

for(i=1;i<size;i++)
{
	cur = num_arr[i];
	j=i-1;
	while(num_arr[j]>cur && j>=0)
	{
		num_arr[j+1]=num_arr[j];
		j--;
	}
	num_arr[j+1]= cur;
	
	printf("List is : ");
	for(k=0;k<size;k++)
		printf("%d ",num_arr[k]);
	printf("\n");
	
}		
printf("Post Insertion Sort\n");
for(i=0;i<size;i++)
	printf("%d ",num_arr[i]);
printf("\n");

}	
