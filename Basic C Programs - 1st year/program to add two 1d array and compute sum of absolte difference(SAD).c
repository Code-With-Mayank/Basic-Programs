 #include <stdio.h>
#include <math.h>
main()
{
	int a[10], b[10], n, sum = 0 ,i;
	printf("size of the array ");
	scanf("%d", &n);
	printf("values for 1st array ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("values for 2nd array ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + fabs(a[i] - b[i]);
	}
	printf("\nTHE SUM = %d", sum);
}
