#include <stdio.h>

void printArray(int array[], int size) 
{
	int i;
  for (i = 0; i < size; i++)
   {
    printf("%d ", array[i]);
   }
  printf("\n");
}

void insertionSort(int arr[], int size)
 {
 	int step;
  for (step = 1; step < size; step++)
   {
    int key = arr[step];
    int j = step - 1;
    while (key < arr[j] && j >= 0) 
	{
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

int main()
{
  int data[] = {76,32,90,5,25,30,1,89,45};
  int size = sizeof(data) / sizeof(data[0]);
  printf("Unsorted array:\n");
  printArray(data, size);
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
  return 0;
}


