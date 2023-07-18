#include <stdio.h>

void swapping(int *x, int *y)
 {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void selectionSort(int arr[], int size)
 {
 	int step,i;

  for (step = 0; step < size - 1; step++) 
  {
    int min = step;
    for ( i = step + 1; i < size; i++)
	 {
        if (arr[i] < arr[min])
        min = i;
    }
  swapping(&arr[min], &arr[step]);
  }
}

void printArray(int array[], int size)
{
	int i;
  for ( i = 0; i < size; ++i)
   {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {67,90,15,20,50,60,87,98};
  int size = sizeof(data) / sizeof(data[0]);
  printf("unsorted array:\n");
  printArray(data, size);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
  return 0;
}

