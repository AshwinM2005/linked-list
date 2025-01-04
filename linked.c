#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node * print_list(struct node *temp, struct node *head);
    struct node * insert_list( struct node *head ,struct node *temp  ) ;
    int n;
    printf("enter the number of nodes ");
    scanf("%d", &n);
    struct node *newnode;
    struct node *head;
    struct node *temp;
    head = 0;

    for (int i = 0; i < n; i++)
    {

        newnode = (struct node *)malloc(sizeof(struct node));
        printf(" enter a number ");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->next = 0;
            temp = newnode;
        }

      
    }
      print_list (temp, head);

   // insertion at the beginning

   

    insert_list ( head ,newnode );
   
   


    return 0;
}

struct node * print_list(struct node *temp, struct node *head)
{
    temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}


 // function  insertion at the beginning
  struct node *insert_list( struct node * head , struct node * temp ) 
{   struct node * newnode;
     newnode = (struct node *)malloc(sizeof(struct node));
    printf(" Enter a number for insertion : ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
 print_list (temp, head);
    
 return newnode;


}