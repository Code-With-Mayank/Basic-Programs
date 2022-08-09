#include<stdio.h>

int main()
{
	int i,j,k,a;
	printf("Enter the number of rows: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=i;j<a;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
