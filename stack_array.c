#include <stdio.h>

#define MAX 5
int stack[MAX];
int top = -1;

//push, pop and display functions
void push()
{
    int value;

    if (top == MAX - 1)
    {
        printf("\nStack Overflow!");
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("\n%d pushed into stack.", value);
    }
}


void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\n%d popped from stack.", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        printf("\nStack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

void main()
{
    //menu driven program
    int choice;
    do
    {
        printf("\n\n--- STACK USING ARRAY ---");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");

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