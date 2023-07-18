#include<stdio.h>
void quicksort(int[],int,int);
void swap(int*,int*);

int main()
{
	int i, n, arr[25];
	printf("\n Enter the number of elements - ");
	scanf("%d",&n);
	printf("\n Enter the %d elements -",n);
	for (i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

    quicksort(arr,0,n-1);
    
	printf("\n Elements after sorting quick sort using(Houre partitioning)- ");
	for (i =0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	
	return 0;
}

void swap(int *x, int *y)
{
	int t =*x;
	*x = *y;
	*y = t;
}


void quicksort(int arr[],int first, int last)

{
	int i,j,pivot;
	
	if(first<last)
	{
		pivot =first;
		i = first;
		j=last;
		
	 while(i<j)
	 {
	 	while(arr[i]<=arr[pivot]&&i<last)
	 	i++;
	 	while(arr[j]>arr[pivot])
	 	j--;
	 	if(i<j)
	 	{
	 		swap(&arr[i],&arr[j]);
		 }
	 }
	  swap(&arr[j],&arr[pivot]);
	  
	  quicksort(arr,first,j-1);
	  quicksort(arr,j+1,last);		
	}
}
