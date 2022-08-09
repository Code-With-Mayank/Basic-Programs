#include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("Enter the number of rows : "); //Number must be 5 or less than that to get a good shape
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
