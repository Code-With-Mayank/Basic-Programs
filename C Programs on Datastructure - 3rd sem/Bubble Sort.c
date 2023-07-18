#include <stdio.h>

void swapping(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swapping(&arr[j], &arr[j+1]);
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {78,5,23,98,12,4,65,70,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Array after sorting: \n");
    printArray(arr, n);
    return 0;
}

