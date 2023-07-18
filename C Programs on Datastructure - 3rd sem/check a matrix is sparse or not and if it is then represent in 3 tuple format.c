#include<stdio.h> 

 int main()
{ 
 int matrix[100][100]; 
 int  i,j,m,n,count = 0;  
 printf("\nEnter the number of rows: ");  
 scanf("%d", &m); 
 printf("\nEnter the number of columns: "); 
  scanf("%d", &n); 
 printf("\n Enter the values of the matrix:\n"); 
 for(i=0; i<m; i++)
 {  
    for(j=0; j<n; j++)
    { 
      scanf("%d", &matrix[i][j]); 
    } 
 } 
 printf("\nThe matrix is:\n"); 
  for(i=0; i<m; i++)
   {  
     for(j=0; j<n; j++)
     { 
        printf(" %d ", matrix[i][j]); 
     } 
     printf("\n"); 
   }  
  for (i = 0; i < m; ++i)
  {  
    for (j = 0; j < n; ++j)
	{ 
      if (matrix[i][j] == 0) 
       ++count; 
    } 
  } 
 if(count > (m*n)/2)
 { 
   printf("\n\nIt is a sparse matrix!"); 
   printf("\n\nRepresenting the array in 3-Tuple form: "); 
   printf("\n\n Row Column Value");
   for(i=0; i<m; i++)
   { 
     for(j=0; j<n; j++)
      { 
        if(matrix[i][j]!=0)
	    { 
        printf("\n %d %d %d ", i+1, j+1, matrix[i][j]); 
        }
      }  
    } 
  } 
 else
 { 
   printf("\n It's not a sparse matrix"); 
 } 
  return 0;
} 

