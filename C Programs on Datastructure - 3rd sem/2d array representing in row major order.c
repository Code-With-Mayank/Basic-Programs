#include<stdio.h>
#define max 20
int main()
{
   int arr[max][max];
   int i, j,m,n;
   printf("\nEnter the number of rows: ");
   scanf("%d",&m);
    printf("\nEnter the number of columns: ");
   scanf("%d",&n);
   for(i=0; i<m; i++) 
   {
      for(j=0;j<n;j++)
	   {
         printf("\n Enter value for arr[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<m; i++) {
      for(j=0;j<n;j++) {
         printf("%d ", arr[i][j]);
         if(j==2)
		 {
            printf("\n");
         }
      }
   }
   printf("Array elemts in row major order:\n");
   for(i=0; i<m; i++) {
      for(j=0;j<n;j++) {
         printf("%d ", arr[i][j]);
         if(j==2)
		 {
            printf("\t");
         }
      }
   }
   return 0;
}

