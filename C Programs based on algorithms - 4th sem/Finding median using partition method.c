#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int Partition(int arr[], int l, int r)
{
	int lst = arr[r];
	int i,j;
	i=l-1;
	for(j=l;j<r;j++)
	{
	    if(arr[j]<lst){
	        i++;
	        swap(&arr[i],&arr[j]);
	    }
	}
	swap(&arr[i+1],&arr[r]);
	return (i+1);
}


int randomPartition(int arr[], int l,
					int r)
{
	int n = r - l + 1;
	int pivot = rand() % n;
	swap(&arr[l + pivot], &arr[r]);
	return Partition(arr, l, r);
}


void MedianUtil(int arr[], int l, int r,
				int k, int* a, int* b)
{

	// if l < r
	if (l <= r) {

		
		int partitionIndex
			= randomPartition(arr, l, r);

		
		if (partitionIndex == k) {
			*b = arr[partitionIndex];
			if (*a != -1)
				return;
		}

		
		else if (partitionIndex == k - 1) {
			*a = arr[partitionIndex];
			if (*b != -1)
				return;
		}

		
		if (partitionIndex >= k)
			return MedianUtil(arr, l,
							partitionIndex - 1,
							k, a, b);

		
		else
			return MedianUtil(arr,
							partitionIndex + 1,
							r, k, a, b);
	}

	return;
}

void findMedian(int arr[],int n)
{
    int a=-1,b=-1;
    int ans;
    if(n%2==1)
    {
        MedianUtil(arr,0,n-1,n/2,&a,&b);
        ans=b;
    }
    else{
        MedianUtil(arr,0,n-1,n/2,&a,&b);
        ans=(a+b)/2;
    }
    printf("The median:%d",ans);
}


// Driver program to test above methods
int main()
{
	int arr[] = { 32,54,76,12,54,23,98,43,33 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findMedian(arr, n);
	return 0;
}
