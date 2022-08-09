#include<stdio.h>

int main()
{
   int i;
   float array[100],sum=1.0,f[100],arrsum=0;
   float n, average;
   printf("Enter the strength of the array: ");
   scanf("%f",&n);
   printf("Enter the values of the array \n");
   for(i=0;i<n;i++)
   {
   	scanf("%f",&array[i]);
   }   
	printf("values for fractional weightage factor \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&f[i]);
	}
	for( i=0;i<n;i++)
	{
		arrsum+=f[i];
	}
	
	for(i=0;i<n;i++)
	if(arrsum==1)
	{
		break;
	}
	else
	{
		sum=sum+(f[i]*array[i]);
	}
	average=(sum-n)/n;
	printf("Average = %f",average);
	
	return 0;
}
