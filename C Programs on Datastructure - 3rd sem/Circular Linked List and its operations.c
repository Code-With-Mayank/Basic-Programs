#include <stdio.h>
#include <stdlib.h>

struct cll
{
    int data;
    struct cll *next;
};
struct cll *head;

void display()
{
    struct cll *temp = head;
    if (head == NULL)
    {
        printf("NO LIST IS AVALIABLE ");
    }
    else
    {
        printf("CIRCULAR LINKED LIST \n");
        do
        {
            printf(" | %d , %d | -- ", temp->data, temp->next);
            temp = temp->next;
        } while (temp != head);
        printf("\n");
    }
}

void insertatend(int data)
{
    struct cll *temp = head;
    struct cll *new = (struct cll *)malloc(sizeof(struct cll));
    if (new == NULL)
    {
        printf("MEMORY ERROR ");
    }
    new->data = data;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    new->next = new;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        temp->next = new;
    }
    printf("SUCCESS \n");
}

void insertstart(int data)
{
    struct cll *temp = head;
    struct cll *new = (struct cll *)malloc(sizeof(struct cll));
    if (new == NULL)
    {
        printf("MEMORY ERROR ");
    }
    else
    {
        new->data = data;
        if (head == NULL)
        {
            head = new;
            new->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            new->next = head;
            temp->next = new;
            head = new;
        }
    }
    printf("SUCCESS \n");
}

void insertatany(int pos, int data)
{
    int i;
	struct cll *temp;
    if (head == NULL)
    {
        printf("NO LIST IS AVALIABLE \n");
    }
    else if (pos == 1)
    {
        insertstart(data);
    }
    else
    {
        struct cll *new = (struct cll *)malloc(sizeof(struct cll));
        new->data = data;
        temp = head;
        for (i = 0; i <= pos - 3; i++)
        {
            temp = temp->next;
        }
        new->next = temp->next;
        temp->next = new;
    }
}
void deletenode(int key)
{
    int i, count;
    struct cll *prev, *cur;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    count = 0;
    cur = head;
    prev = cur;
    while (prev->next != head)
    {
        prev = prev->next;
        count++;
    }
    i = 0;
    while (i <= count)
    {
        if (cur->data == key)
        {
            if (cur->next != cur)
                prev->next = cur->next;
            else
                prev->next = NULL;
            if (cur == head)
                head = prev->next;
            free(cur);
            if (prev != NULL)
                cur = prev->next;
            else
                cur = NULL;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
        i++;
    }
}

int main()
{
    int ch,data,pos;
  while(ch!=6)
   {
    printf("ENTER \n 1. FOR INSERT A NEW NODE AT THE BEGINNING \n 2. TO INSERT A NEW NODE AT ANY POSITION  \n 3. FOR INSERT A NEW NODE AT THE END  \n 4. TO DELETE BY VALUE \n 5. TO PRINT THE LIST  \n 6. FOR EXIT \n");
    scanf("%d", &ch);
        switch (ch)
        {
          case 5:
           {
            display();
            break;
           }
           case 3:
           {
            printf("ENTER NODE VALUE TO INSERT ");
            scanf("%d", &data);
            insertatend(data);
            break;
           }
            case 1:
           {
            printf("ENTER NODE VALUE TO INSERT ");
            scanf("%d", &data);
            insertstart(data);
            break;
           }
        case 2:
        {
            printf("ENTER VALUE AND POSITION OF THE NEW NODE ");
            scanf("%d%d", &data, &pos);
            insertatany(pos, data);
            break;
        }
        case 4:
        {
            printf("ENTER VALUE TO DELETE NODE ");
            scanf("%d", &data);
            deletenode(data);
            break;
        }
        case 6:
        {
            printf("THANK YOU \n");
            break;
        }
		default:
         printf("INVALID INPUT \n ");
        }
   }
return 0;
}  
