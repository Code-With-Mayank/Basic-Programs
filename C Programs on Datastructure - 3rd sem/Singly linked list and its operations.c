#include <stdio.h>
#include<stdlib.h>
#include<malloc.h> 

struct node 
{
    int info;
    struct node* link;
};
struct node* start = NULL;


void insertAtFront();
void insertAtEnd();
void traverse();
void insertAtPosition();
void deletion();
void count();
void search();

  
int main()
{
    int choice,ch;
    printf("\t\tOPERATIONS ON SINGLE LINKED LIST \n\n");
    do  
	{
        printf("\n\n\t1.INSERT\n \t2.DISPLAY \n\t3.DELETE\n \t4.COUNT \n\t5.SEARCH \n\t6.EXIT\n");
        printf("\nEnter Choice :\t");
        scanf("%d", &choice);      
        switch (choice)
		{      
        case 1:
        	{
            printf("\n\t1.Insertion at first\n\t2.Insertion at end\n \t3.Insertion at middle\n");
            printf("\nEnter Choice :\t");
            scanf("%d", &ch);
               switch (ch)
               {
            	case 1:
            		insertAtFront();
            		break;
            	case 2:
					insertAtEnd();
                    break;
                case 3:
                	insertAtPosition();
                    break;
                default:
                    printf("Incorrect Choice\n");
			    }
			}
        case 2:
            traverse();
            break;
        case 3:
        	deletion();
        	break;
        case 4:
        	 count();
        	 break;
        case 5:
        	 search();
        	 break;
        case 6:
        	printf("\n End of program");
        	break;
        default:
            printf("Incorrect Choice\n");
        }
    }while(choice!=6);    
       return 0;
}

void traverse()
{
    struct node* temp;
    if (start == NULL)
        printf("\n List is Empty\n");
    else {
        temp = start;
        while (temp != NULL)
		{
            printf("|%d , %u|---> ",temp->info,temp->link);
            temp = temp->link;
        }
    }
}

void insertAtFront()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->info = data;
  
    temp->link = start;
    start = temp;
}
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);

    temp->link = 0;
    temp->info = data;
    head = start;
    while (head->link != NULL)
	 {
        head = head->link;
    }
    head->link = temp;
}

void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);
    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1) 
	{
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}
  
void deletion()
{
   int N;
   struct node* s=start,*prev;
   printf("\nEnter the value to be deleted: ");
   scanf("%d",&N);
   if (start == NULL) 
   { 
       printf("Error : Invalid node pointer !!!\n");       
       return; 
    }
   if (s->info == N) 
	{
        start = s->link;   
        free (s); 
		printf("\n %d is deleted",N);       
        return;
    }
    while (s != NULL && s->info!= N)
    {
        prev = s;
        s = s->link;
    }
      if (s == NULL)
	  {
        printf("%d not found in Linked List\n",N);
        return;
      }
	  prev->link = s->link;     
    	free (s);
}

void count()
 {
    struct node* temp = start;
    int count=0;
    while(temp != NULL)
	{
       temp = temp->link;
       count++;
    }
    printf("\n Total no. of nodes is %d",count);
 }
 
 void search()
{
    int index,key;
    struct node *curNode;
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    index = 0;
    curNode = start;
    while (curNode != NULL && curNode->info!= key)
    {
        index++;
        curNode = curNode->link;
        if (curNode==NULL)
        index=-1;
    }
    if (index >= 0)
        printf("%d found in the list at position %d\n", key, index + 1);
    else
        printf("%d not found in the list.\n", key);    
}
