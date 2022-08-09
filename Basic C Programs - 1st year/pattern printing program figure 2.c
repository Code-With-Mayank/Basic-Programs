#include<stdio.h>

int main()
{
	int i,j,a;
	printf("Enter how many rows you want to see \n");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
return 0;
}
