#include <stdio.h>

int main()
{
    int arr[100],i,j,n,key;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        key = arr[i];
        for(j=i-1; j>=0 && key<arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
    printf("The final array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
