/*
 *Input : User Enters an array of numbers, Element of the Array
 *Output: Sorted array, making using of Merge sort
 *
 * */
 #include<stdio.h>

void conquer(int arr[],int lft ,int rt ,int mid)
{
	int i,j,k;
	int n1,n2;
	int p;

	n1 = mid - lft + 1;
	n2 = rt - mid;
	//copy elements to sperate arrays by cerating new arrays
	int arrL[n1],arrR[n2];
	for(i=0;i<n1;i++)
		arrL[i]=arr[lft+i];
	for(j=0;j<n2;j++)
		arrR[j]=arr[mid+1+j];	

	
	i=0;j=0;k=lft;
	//Merge two arrays back to original array
	while(i<n1 && j<n2)
	{
		if(arrL[i]<=arrR[j])
		{
			arr[k]=arrL[i];
			i++;
		}
		else
		{
			arr[k]=arrR[j];
			j++;
		}
		k++;	
	}
	//Copy left over elements of left array
	while(i<n1)
	{
		arr[k]=arrL[i];
		i++;k++;
	}
	//copy left over eleemnts of right array	
	while(j<n2)
	{
		arr[k]=arrR[j];
		j++;k++;
	}
	printf("\nLeft Array After : ");
	for(p=0;p<n1;p++)
		printf("%d ",arrL[p]);
	printf("\nRight Array After: ");
	for(p=0;p<n2;p++)
		printf("%d ",arrR[p]);

}

void divide(int arr[],int lft,int rt)
{
	int mid;
	if(lft<rt)
	{
		mid = (lft+rt)/2;
		divide(arr,lft,mid);
		divide(arr,mid+1,rt);
		conquer(arr,lft,rt,mid);

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
	

	divide(num_arr,0,size-1);

	printf("Post Merge Sort\n");
	for(i=0;i<size;i++)
		printf("%d ",num_arr[i]);
	printf("\n");

}	
