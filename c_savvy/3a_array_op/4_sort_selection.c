/*
 *Input : User Enters an array of numbers, Element of the Array
 *Output: Sorted array, making using of selection sort
 *
 * */
 #include<stdio.h>
int main()
{
int size, i,j,tmp,s_index,smallest,k;
printf("Enter Size of Array\n");
scanf("%d",&size);
int num_arr[size];
printf("Enter Array elements\n");
for(i=0;i<size;i++){
	scanf("%d",&num_arr[i]);
}


for(i=0;i<size;i++)
{
	smallest = num_arr[i];
	s_index=i;
	for(j=i;j<size;j++){
		if(num_arr[j]<smallest){
			smallest = num_arr[j];
			s_index = j;
		}
	}
	printf("smallest %d index %d\n",smallest,s_index);
	tmp = num_arr[i];
	num_arr[i]=num_arr[s_index];
	num_arr[s_index]=tmp;
}		
	

printf("Post Selection Sort\n");
for(i=0;i<size;i++)
	printf("%d ",num_arr[i]);
printf("\n");

}	
