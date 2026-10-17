#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;


void push()
{
    struct node *newnode;
    int value;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter value to push: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = top;
    top = newnode;

    printf("\n%d pushed into stack.", value);
}

void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("\nStack Underflow!");
        return;
    }

    temp = top;
    printf("\nDeleted element: %d", top->data);

    top = top->next;
    free(temp);
}


void display()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("\nStack is empty!");
        return;
    }

    temp = top;

    printf("\nStack elements are:\n");

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void main()
{
    int choice;

    do
    {
        printf("\n\n----- STACK USING LINKED LIST -----");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(choice != 4);
}