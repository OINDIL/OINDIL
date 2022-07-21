#include <stdio.h>

int main()
{
    int low, mid, high, num, arr[100], key;
    printf("\nEnter how many array elements you want to enter: "); // array size declaration
    scanf("%d", &num);
    printf("\nEnter the elements[in sorted manner]:\n"); // taking input in the array
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    low = 0;
    high = num - 1;
    mid = (low + high) / 2;
    // begin search
    printf("\nEnter the element you want to search: ");
    scanf("%d", &key);
    while (low <= high)
    {
        if (arr[mid] < key)
            low = mid + 1;

        else if (arr[mid] == key)
        {
            printf("\n%d found at location %d", key, mid + 1);
            break;
        }
        else
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        if (low > high)
            printf("\nElement: %d not found!! It's not present in the array!");
    }
    return 0;
}