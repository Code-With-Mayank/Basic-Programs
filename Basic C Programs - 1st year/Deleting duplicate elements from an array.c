#include <stdio.h>
int main()
{
  int i , j , k , a[10],t;
  printf("ENTER THE SIZE ");
  scanf("%d", &t);
  printf("\n ENTER THE NUMBERS ");
  for( i = 0 ; i<t ; i++)
  {
  scanf("%d", &a[i]);
  }
  for ( i = 0 ; i<t ; i++)
    {
    	for( j = i+1 ; j<t ;)
    	{
    		if(a[i]==a[j])
    		{
    			for( k = j ; k <=t ; k++ )
    			{
    				a[k]= a[k+1];
				}
				t--;
				}
				else 
				j++;
			}
		}
		printf("\n THE ELEMENTS ARE :");
		for ( i = 0 ; i <t ; i++)
		printf ("%d ", a[i]);
		
	return 0;
}
