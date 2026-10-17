#include <stdio.h>
int main()
{
    printf("BINARY SEARCH\n");

    //creating a sorted array
    int arr[10], n, i, val, found = 0, beg, end, mid;
    printf("Enter the number of elements(1-10): ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
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
    printf("\n");   

    //binary search
    printf("Enter the value to search: ");
    scanf("%d", &val);      

    beg = 0;
    end = n - 1;

    while(beg <= end)
    {
        mid = (beg + end) / 2;
        if(arr[mid] == val)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < val)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if(found == 1)
    {
        printf("Value found at position %d\n", mid + 1);
    }
    else
    {
        printf("Value not found\n");
    }

    return 0;
}