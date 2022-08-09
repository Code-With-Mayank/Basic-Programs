#include <stdio.h>
int main ()
{
	int a[20],n , i , j , temp ;
	printf("ENTER A RANGE");
	scanf("%d",&n);
	printf("\n ENTER THE ELEMENTS OF THE ARRAY ");
	for (i = 0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for( i = 0 ; i <n ; i++)
	{
		for( j = ( i +1) ; j <n ; j++)
		{
			if( a[i]>a[j])
			{
			  temp = a[i];
			  a[i]= a[j];
			  a[j]	= temp ;
			}
		}
	}
	printf(" \n THE SORTED ELEMENTS ARE =\n");
	for( i = 0 ; i< n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
