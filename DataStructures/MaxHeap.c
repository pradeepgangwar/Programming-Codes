/* Building a MaxHeap*/

#include <stdio.h>

void swap(int a[], int i, int large)
{
    int temp;
    
    temp = a[i];
    a[i] = a[large];
    a[large] = temp;
}

void max_heapify(int a[], int i, int n)
{
    int large;
    int left = 2*i;
    int right = 2*i + 1;
    if (left<=n && a[left]>a[i])
        large = left;
    else 
        large = i;
    if(right<=n && a[right]>a[large])
        large = right;
    if(large!=i)
    {
        swap(a,i,large);
        max_heapify(a,large,n);
    }
}

void build_maxheap(int a[], int n)
{
    int i;
    for(i=n/2 ; i>=1 ; i--)
    {
        max_heapify(a,i,n);
    }
}

int main()
{
    int a[100],n,i;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    build_maxheap(a,n);
    printf("\nMax Heap is : ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

