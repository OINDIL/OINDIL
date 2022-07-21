#include<stdio.h>
int binarySearch(int arr[], int size, int element)
{
    int left = 0, right = size - 1, mid = 0;
    while(left <= right)
    {
        mid = (left + right) / 2; 
        if(arr[mid] == element)
        {
           return mid;
        }
        if(arr[mid] < element)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

}

int main(){
    int arr[50], size, element;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    printf("\nEnter the elements of the array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &element);
    int binaryIndex = binarySearch(arr, size, element);
    printf("\nThe element %d was found at %d location", element,binaryIndex);
return 0;
}