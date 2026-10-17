#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to insert a new node at the end of the linked list
void insert() 
{
    struct node *newnode = (struct node *)
    malloc(sizeof(struct node)), *temp;
    printf("Enter value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

   if (head == NULL) 
   {
        head = newnode;
    } 
    else 
    {
        temp = head;
        
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }
    printf("Node inserted.\n");
}

// Function to delete a node with a specific value from the linked list
void deleteNode() 
{
    struct node *temp = head, *prev = NULL;
    int val;
    if (head == NULL) 
    { 
        printf("List is empty!\n"); 
        return; 
    }

    printf("Enter value to delete: ");
    scanf("%d", &val);

    if (temp->data == val) 
    {
        head = temp->next;
        free(temp);
        printf("Node deleted.\n");
        return;
    }

    while (temp != NULL && temp->data != val) 
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) 
    {
        printf("Value not found!\n");
    }
    else 
    {
        prev->next = temp->next;
        free(temp);
        printf("Node deleted.\n");
    }
}

// Function to display the linked list
void display() 
{
    struct node *temp = head;
    if (head == NULL) 
    { 
        printf("List is empty!\n"); return;
    }

    printf("List: ");

    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() 
{
    int choice;
    printf("1.Insert 2.Delete 3.Display 4.Exit\n");
    while (1) 
    {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: insert(); break;
            case 2: deleteNode(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
