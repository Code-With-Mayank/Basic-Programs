#include <stdio.h>
#include <math.h>

int main()
{
	int i,j,n, sum = 0;
	int num[10][10];
	int *a = &num[0][0];

	printf("Enter the size of matrix A \n");
	scanf("%d", &n);

	printf("Enter Elements of the matrix \n");
	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			scanf("%d", (a + i * n + j));
		}
	}
	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			sum = sum + pow(*(a + i * n + j), 2);
		}
	}

	printf("Sum of all elements in matrix = %d\n", sum);
	float root = sqrtf(sum);
	printf("norm = %f", root);
	return 0;
}
