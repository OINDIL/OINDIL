#include <stdio.h>

int main()
{
    int arr[100], num, i, j, temp;
    printf("\nEnter the size: ");
    scanf("%d", &num);
    printf("\nEnter the elements:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array is: ");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nThe sorted array is: ");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", arr[i]);
    }   
    return 0;
}