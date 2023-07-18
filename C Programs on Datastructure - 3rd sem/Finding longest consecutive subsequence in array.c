#include <stdio.h>
#include <stdlib.h>
int consequetive (int a[] ,int n)
{

 int i , j ,c, temp,b[20],l=0;
	
	for( i = 0 ; i <n ; i++)
	{
		for( j = ( i +1) ; j <n ; j++)
		{
			if( a[i]>a[j])
			{
			  temp = a[i];
			  a[i]= a[j];
			  a[j]	= temp ;
			}
		}
	}

	
	for(i=0;i<=(n-1);i++)
	{
		c=a[i]+1;
		for(j=i+1;j<=(n-1);)
		{
			if(c==a[j])
			{
				
				b[l]=c;
				l++;
				break;
			}
			
			else
			j++;
		}
    }
    printf("\nTHE CONSEQUETIVE ELEMENTS ARE :");
    printf("%d ",(b[0]-1));
   for( i =0 ; i<l;i++)
   {
     printf("%d ",b[i]);
	} 
	return 0;
}
int main()
{
  int n,i;
  printf("\nENTER THE RANGE OF THE ARRAY \n");
  scanf("%d", &n);
  int *a;
  a = (int *)malloc(sizeof(int));//dynamic allocation of memory using malloc
  //reading of elements
  printf("\nENTER THE ELEMENTS OF THE ARRAY \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  consequetive(a, n);
  
 return 0; 
}

