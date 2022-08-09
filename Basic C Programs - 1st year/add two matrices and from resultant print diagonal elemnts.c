#include <stdio.h>

int main()
{
	int t1[10][10], t2[10][10], sum[10][10];
	int n,i,j;
	printf("ENTER THE SIZE OF nxn MATRIX :   ");
	scanf("%d", &n);
	printf("\n ENTER THE ELEMENTS OF THE 1ST ARRAY:  ");
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &t1[i][j]);
		}
	}
	printf("\n  ENTER THE ELEMENTS OF 2ND ARRAY:  ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &t2[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			sum[i][j] = t1[i][j] + t2[i][j];
		}
	}
	
	printf("\n THE ELEMENTS OF  RESULTANT MATRIX ARE: \n");

	for ( i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("\t%d", sum[i][j]);
		}
	}
	printf("\n THE PRINCIPLE DIAGONAL ELEMENTS ARE :  \n ");
	for ( i = 0; i < n; i++)
	{

		printf("%d ", sum[i][i]);
	}
}
