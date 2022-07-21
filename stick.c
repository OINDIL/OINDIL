#include<stdio.h>
#include<stdlib.h>
int compare(const void * p1, const void * p2){
    return (*(int*)p1 - *(int*)p2);
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,j=0, maxArea=1;
        scanf("%d", &n);
        int arr[n],area[n/2];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        qsort(arr,n,sizeof(int), compare);
        for(int i = 1; i<n; i++)
        {
            if(arr[i-1]==arr[i]) 
            {
                area[j] = arr[i];
                i++;
                j++;
            }
        }
        if(j<=1)
        {
            printf("-1\n");
        }
        else
        {
            for(int i = j-1; i >= j-2; i--)
            {
                maxArea *= area[i];
            }
            printf("%d\n", maxArea);
        }
        
    }
    return 0;
}