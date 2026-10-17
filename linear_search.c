#include <stdio.h>
int main()
{
    printf("LINEAR SEARCH\n");

    //creating an array
    int arr[10], n, i, val, found = 0;
    printf("Enter the number of elements(1-10): ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    //displaying the array
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    //linear search
    printf("Enter the value to search: ");
    scanf("%d", &val);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == val)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element %d found at position %d\n", val, i+1);
    else
        printf("Element %d not found in the array\n", val);
        
    return 0;
}