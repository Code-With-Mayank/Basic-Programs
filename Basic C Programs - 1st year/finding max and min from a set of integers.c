#include <stdio.h>
int main()
{
	int a[100], i , s, max , min ,g,l;
	printf(" ENTER THE SIZE OF THE ARRAY ");
	scanf("%d", &s);
	printf("\n ENTER THE NUMBERS ");
	for (i=0 ; i<s ; i++)
	{
		scanf("%d",&a[i]);
	}
	max = min =a[0];
	for (i=1; i<s; i++)
	{
		if(max<a[i])
		{
		max=a[i];
		g=i;
	    }
		if(min>a[i])
		{
		min = a[i];
		l=i;
	    }
	}
	printf(" THE LARGEST INTEGER = %d and IT 'S POSITION = %d",max, g);
	printf("\n THE SMALLEST INTEGER = %d and IT 'S POSITION = %d ", min, l);
	
	return 0;
}

