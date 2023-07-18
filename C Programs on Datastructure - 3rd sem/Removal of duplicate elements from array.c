#include <stdio.h>
#include<stdlib.h>
int duplicate(int a[], int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<=n;k++)
				a[k]=a[k+1];
			n--;	
			}
			else
			j++;
		}
	}
	printf("\nFINAL ARRAY CONSTITIUTES OF : ");
    for (i = 0; i < n; i++)
    printf("%d ", a[i]);
return 0;	
}
main()
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
  duplicate(a, n);
  
}

