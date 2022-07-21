#include <stdio.h>

int main()
{
    int temp,arr[100], min, num, i, j;
    printf("\nEnter the size: ");
    scanf("%d", &num);
    printf("\nEnter the elements:\n ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is: \n");
    for(i = 0;i < num;i++)
    {
        printf("%d\t", arr[i]);
    }
    for (i = 0; i < num - 1; i++)
    {
        min = i;
        for (j = i + 1; j < num; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            } 
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("\nThe sorted array is: \n");
    for(i = 0;i < num;i++)
    {
        printf("%d\t", arr[i]);
    }
return 0;
}
