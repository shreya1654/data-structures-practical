#include <stdio.h>
void main()
{
    printf("INSERTION\n");

    //creating an array
    int arr[10], n, pos, i, val;
    printf("Enter the number of elements(1-10): ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    //insertion
    printf("Enter the position to insert new element: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    for(i = n-1; i >= pos-1; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos-1] = val;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nDELETION\n");
    //deletion
    printf("Enter the position to delete element: ");
    scanf("%d", &pos);
    for(i = pos-1; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");  
}