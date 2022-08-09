 #include <stdio.h>
int main ()
{
	int a[20],i , n , c=0,t,j;
	printf("ENTER THE RANGE ");
	scanf("%d", &n);
	printf("\n ENTER THE NUMBERS ");
	for ( i=0 ; i <n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf( "\n THE PRIME NUMBERS :\n");
	for (i = 0 ; i<n; i++)
	{
		 c=0;
		 t=a[i];
		 for(j=2; j <=(t/2); j++)
		 {
		 	if( t%j ==0)
			 {
			 c=c+1;
		 	break;	
			 }
			
			
		 }
		 
		 if(c==0)
		 printf("%d ",a[i]);
	}
	return 0;
}
