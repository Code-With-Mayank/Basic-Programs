#include<stdio.h>
#include<stdlib.h>

int insert(int ptr[], int n);
int deletion(int ptr[], int n);
int counting(int ptr[], int n);
int Display(int ptr[], int n);

//Insertion of element

int insert(int ptr[], int n)
{
int i,pos,ele;
printf("\n Enter the position and the element to be inserted: ");
scanf("%d%d",&pos,&ele);
if(pos > n)
printf("\n Invalid Input");
else
{
   for(i = n-1;i>= pos-1; i--)
   {
     ptr[i+1] = ptr[i];
   }
    ptr[pos-1] = ele;

    printf("Array after insertion is:\n");

   for (i = 0; i <= n; i++)
    printf("a[%d] = %d\n",i,ptr[i]);
}
n=n+1;
return 0;
}

//Deletion of element

int deletion(int ptr[], int n)
{
int i,position;
printf("\nEnter the position to be deleted : ");
scanf("%d", &position);

if (position > n+1)
printf("\n Deletion not possible.\n");
else
{
for (i = position-1; i<n; i++)
ptr[i] = ptr[i+1];

printf("\nArray after deletion : \n");

for (i=0;i<n;i++)
 printf("a[%d] = %d\n",i,ptr[i]);
}
n=n-1;
return 0;	
}

//counting the number of elements

int counting(int ptr[], int n)
{
	int i,c=0;
   for (i= 0; i<n ; i++)
   {
   	c=c+1;
   }
   printf(" The elements are = %d",c);
}

//Displaying the elements

int Display(int ptr[], int n)
{
	int i;
	printf("\n The elements in the array are : ");
	for(i=0;i<n;i++)
	{
		 printf("a[%d] = %d\n",i,ptr[i]);
	}
	return 0;
}


int main()
{
	int *ptr;
	int ch,i,n;
	printf("Enter the range of array: ");
	scanf("%d",&n);
	ptr= (int*)malloc(n*sizeof(int));
	
	for(i = 0; i < n; i++)
      {
	    printf("\n Enter value:  ");
        scanf("%d",&ptr[i]);
      }
      printf("\nThe Array is: \n");
      
    for(i = 0; i < n; i++)
       {
       	 printf("a[%d] = %d\n",i,ptr[i]);
	   }
  while(1)
  {
	printf("\n\n 1. INSERT 2. DELETE 3. COUNT 4. DISPLAY 5. EXIT  ");

	printf("\tEnter Your Choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			{
				insert(ptr,n);
				break;
			}
	    case 2:
	    	{
	    		deletion(ptr,n);
	    		break;
			}
		case 3:
			{
				counting(ptr,n);
				break;
			}
		case 4:
			{
				Display(ptr,n);
				break;
			}
		case 5: exit(0);
		default: 
		{
			printf("\n User input is invalid");
		}
		    
	}
  }
return 0;
}
