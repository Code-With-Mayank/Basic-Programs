#include<stdio.h>

int main()
{
	int n,k,value=1,space,j;
	printf("Enter the number of rows: "); //enter the number of rows to print in pascal triangle
	scanf("%d",&n);
	for(k=n-1;k>=0;k--)
	{
		for(space=k;space<=n;space++)
		{
			printf("  ");
		}
	   for(j=0;j<=k;j++)
    	{
		if(j==0|| k==0)
		value=1;
		else
		value = value*(k-j+1)/j; 
		printf("%4d",value);
    	}
    	printf("\n");
    }
	return 0;
}
