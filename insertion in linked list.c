/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head, *newnode, *temp;
    head  = 0;

    int choice;
    while(scanf("%d",&choice) && choice == 1)
    {
        newnode  = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
        if(head == 0)
        {
            head =  temp  = newnode;
        }

        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }

    // Inserting an element at the " Beginning" -->>

    newnode  = (struct node *)malloc(sizeof(struct node));
    printf("Enter data you want to insert at beginning-> : ");
    scanf("%d", &newnode -> data);
    newnode -> next =  head;
    head = newnode;

    //End of insertion


    //Printing The Elements-->
    printf("Here is your Data: \n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp -> data);
        temp =  temp -> next;
    }
}*/


// Inserting element at the end-->
/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head, *newnode, *temp;
    head  = 0;

    int choice;
    while(scanf("%d",&choice) && choice == 1)
    {
        newnode  = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
        if(head == 0)
        {
            head =  temp  = newnode;
        }

        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }

   // temp = head;

   /* while(temp -> next !=NULL)
    {
        temp = temp -> next;
    }*/

/* newnode  = (struct node *)malloc(sizeof(struct node));
 printf("Enter data you want to insert at the end-> : ");
 scanf("%d", &newnode -> data);
 temp->next = newnode;
 newnode ->  next = NULL;

 printf("Here is your Data: \n");
 temp = head;
 while(temp != NULL)
 {
     printf("%d\n",temp -> data);
     temp =  temp -> next;
 }
}*/

//Inserting element at any place-->

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    int count=0;
    struct node *head, *newnode, *temp;
    head  = 0;

    int choice;
    while(scanf("%d",&choice) && choice == 1)
    {
        count++;
        newnode  = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
        if(head == 0)
        {
            head =  temp  = newnode;
        }

        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }

    //insering -->

    int position;
    scanf("%d",&position);
    if(position > count)
    {
        printf("Invalid position\n");
    }

    else
    {
        temp = head;
        int i=1;
        while(i<position)
        {
            temp = temp -> next;
            i++;
        }

        //newnode  = (struct node *)malloc(sizeof(struct node));
        printf("Enter data you want to insert at any positioin-> : ");
        scanf("%d", &newnode -> data);
        newnode -> next = temp -> next;
        temp -> next = newnode;
    }

    printf("Here is your Data: \n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp -> data);
        temp =  temp -> next;
    }
}


