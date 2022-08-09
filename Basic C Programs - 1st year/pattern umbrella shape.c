#include<stdio.h>

int main()
{
	int i,j,rows,star=0;
	printf("Enter the number of rows: "); //number of rows in the umbrella shape
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=(rows-i-1);j++) //inner loop for space
		{
			printf(" ");
		}
		while (star!=(2*i+1))
		{
			printf("*");
			star++;
		}
		star=0;
		printf("\n");
	}
	for(i=0;i<rows;i++) 
	{ 
	   for(j=0;j<rows;j++) //second inner loop for the lower stick part
	   {
	   	printf(" ");
	   }
		printf("*");
		printf("\n");
	}
	return 0;
}
