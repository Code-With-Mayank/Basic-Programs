#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
} *head; 
void insertAtFront();  
void insertAtEnd(); 
void insertAtPosition();   
void deletion();  
void traverse();  
void search();  
void deleteFromBeginning();
void last_delete();
void deletion_middle();

//Main function
int main ()  
{  
int choice,ch1,ch2;  
    printf("\t\tOPERATIONS ON DOUBLE LINKED LIST \n");
    do
    {   
        printf("\n\n\t1.INSERT\n \t2.DISPLAY \n\t3.DELETE\n \t4.SEARCH \n\t5.EXIT\n");  
        printf("\nEnter your choice : \t");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1: 
			{
            printf("\n\t1.Insertion at first\n\t2.Insertion at end\n \t3.Insertion at middle\n");
            printf("\nEnter Choice :\t");
            scanf("%d", &ch1);
               switch (ch1)
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
			{
                  printf("\n\t11.Deletion from first\n\t12.Deletion from end\n \t13.Deletion at middle\n");
                  printf("\nEnter Choice :\t");
                  scanf("%d", &ch2);
               switch (ch2)
			    {
            	case 11:
            		deleteFromBeginning();
            		break;
            	case 12:
					last_delete();
                    break;
                case 13:
                	deletion_middle();
                    break;
                default:
                    printf("Incorrect Choice\n");
			    }
            }    
			  traverse();
              break;    
            case 4:  
                   search();  
                   break; 
            case 5:  
                   printf("\n End of program");
                	break;  
            default:  
                  printf("Please enter valid choice..");  
        }  
    }  while(choice!=5);
       return 0;
}

void insertAtFront()  //Insertion at first function
{  
   struct node *ptr;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n OVERFLOW");  
   }  
   else  
   {  
       printf("\n Enter Value: ");  
       scanf("%d",&item);  
      
       if(head==NULL)  
      {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
      }  
       else   
      {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
      }  
      printf("\n Node inserted\n");  
    }      
}

void  insertAtEnd()  //Insertion at end function
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\n Enter value: ");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
             
       }  
     printf("\n Node inserted \n");  
    } 
	 
void insertAtPosition() //Insertion at any position function
{  
   struct node *ptr,*temp;  
   int item,loc,i;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n OVERFLOW");  
   }  
   else  
   {  
       temp=head;  
       printf("\nEnter the location: ");  
       scanf("%d",&loc);  
       for(i=1;i<loc-1;i++)  
       {  
           temp = temp->next;  
           if(temp == NULL)  
           {  
               printf("\n There are less than %d elements", loc);  
               return;  
           }  
       }  
       printf("\nEnter value: ");  
       scanf("%d",&item);  
       ptr->data = item;  
       ptr->next = temp->next;  
       ptr -> prev = temp;  
       temp->next = ptr;  
       temp->next->prev=ptr;  
       printf("\n Node inserted\n");  
   }  
}  
void traverse()  //traversal function
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n Empty List\n");  
    }  
    else   
    {  
        ptr = head;  
        while(ptr != NULL)  
        {  
            printf(" <---| %d |---> ",ptr->data);  
            ptr=ptr->next;  
        }  
    }  
} 
     
void search()  //search function
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("\n %d found at location %d ",item,i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nItem not found\n");  
        }  
    }             
} 

void deleteFromBeginning()   //Deletion from beginning function
{
    struct node * toDelete;

    if(head == NULL)
    {
        printf("Unable to delete. List is empty.\n");
    }
    else
    {
        toDelete = head;

        head = head->next;
        
        if (head != NULL)
            head->prev = NULL; 
        free(toDelete);
        printf("SUCCESSFULLY DELETED NODE FROM BEGINNING OF THE LIST.\n");
    }
}

void last_delete()  //deletion from last function
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
        printf("\n Node Deleted\n");  
    }  
}  

void deletion_middle() //deletion from middle function
{
    struct node *current;
    int i, position;
    printf("Enter the node position which you want to delete: ");
    scanf("%d", &position);
    current = head;
    for(i=1; i<position && current!=NULL; i++)
    {
        current = current->next;
    }
    if(current != NULL)
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;

        free(current); 

        printf("SUCCESSFULLY DELETED NODE FROM %d POSITION.\n", position);
    }
    else
    {
        printf("Invalid position!\n");
    }
} 
