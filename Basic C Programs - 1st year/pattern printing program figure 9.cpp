#include<stdio.h>

int main()
{
	int i,j,a;
	printf("Enter the number of rows : ");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
