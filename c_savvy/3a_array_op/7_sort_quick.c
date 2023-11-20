/*
 *Input : User Enters an array of numbers, Element of the Array
 *Output: Sorted array, making using of Quick sort
 *
 * */
 #include<stdio.h>

int partition(int arr[],int lft ,int rt)
{
	int i,j,tmp;
	int pivot;

	i=lft-1;
	pivot=arr[rt];
	for(j=lft;j<rt;j++)
	{
		if(arr[j]<pivot){
		i++;
		//swap
		tmp = arr[j];
		arr[j]=arr[i];
		arr[i]=tmp;
		}
	}
	i++;
	tmp = arr[i];
	arr[i]= pivot;
	arr[rt]=tmp;
	return i;
}

void qsort(int arr[],int lft,int rt)
{
	int pindx;
	if(lft<rt)
	{
		pindx = partition(arr,lft,rt);

		qsort(arr,lft,pindx-1);
		qsort(arr,pindx+1,rt);

	}
}

int main()
{
	int size, i,j,tmp,s_index,cur,k;
	printf("Enter Size of Array\n");
	scanf("%d",&size);
	int num_arr[size];
	printf("Enter Array elements\n");
	for(i=0;i<size;i++)
		scanf("%d",&num_arr[i]);
	

	qsort(num_arr,0,size-1);

	printf("Post Quick Sort\n");
	for(i=0;i<size;i++)
		printf("%d ",num_arr[i]);
	printf("\n");

}	
