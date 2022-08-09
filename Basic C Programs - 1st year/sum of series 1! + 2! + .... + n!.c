 #include <stdio.h>
main()
{
	int i , f=1 , n ,j; 
	long sum = 0;
	printf(" ENTER THE RANGE ");
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
		f=1 ;
		for( j =1 ; j <= i ; j ++)
		{
			f=f*j;
		}
		sum = sum +f ;
	}
	printf("\n The final sum = %ld", sum );
}
