#include <stdio.h>
main()
{
	int a[10][10],b[10][10],i,j,n,k, sum =0, c[10][10] ;
	printf (" ENTER THE NUMBER OF ROWS/COLUMNS OF nxn MATRIX: ");
	scanf("%d",&n);
	printf("\n ENTER THE FIRST MATRIX\n");
	for(i = 0 ; i<n; i++)
	{
		for(j = 0 ; j< n ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n ENTER THE SECOND MATRIX\n");
	for(i = 0 ; i<n; i++)
	{
		for(j = 0 ; j< n ; j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
		printf(" \n The first array :\n");
     for(i = 0 ; i<n; i++)
		{
	 
		for(j = 0 ; j<n ; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	    }
	    printf(" \n The second array: \n");
	for(i = 0 ; i<n; i++)
		{
	 
		for(j = 0 ; j<n ; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	    }
		for(i = 0 ; i<n; i++)
	    {
		for(j = 0 ; j<n ; j++)
		{
			sum = 0 ;
			for ( k = 0 ; k<n ; k++)
			{
				sum = sum + ( a[i][k]*b[k][j]);
			}
			c[i][j]= sum ;
			
		}
	}
			printf("\n ENTER THE RESULT MATRIX\n");
	for(i = 0 ; i<n; i++)
	{
		for(j = 0 ; j< n ; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	}
