# include <stdio.h>
main ()
{
	int a[10],b,c=0 , i ,n;
	printf("ENTER THE ELEMENT NEEDS TO BE SEARCHED ");
	scanf("%d",&b);
	printf("\nENTER THE RANGE OF THE ARRAY ");
	scanf("%d",&n);
	printf("\n ENTER THE ELEMENTS");
	for ( i =0; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	for ( i =0 ; i<n ; i++)
	{
		if(b==a[i])
		{
			c=c+1;
			break;
		}
	}
	if ( c ==1)
	printf("\n THE ELEMENT IS FOUND AND ITS POSITION IS = %d ", i);
	else
	printf("\n THE ELEMENT COULDNOT BE FOUND ");
}
