/* Building a MinHeap*/

#include <stdio.h>

void swap(int a[], int i, int small)
{
    int temp;
    
    temp = a[i];
    a[i] = a[small];
    a[small] = temp;
}

void min_heapify(int a[], int i, int n)
{
    int small;
    int left = 2*i;
    int right = 2*i + 1;
    if (left<=n && a[left]<a[i])
        small = left;
    else 
        small = i;
    if(right<=n && a[right]<a[small])
        small = right;
    if(small!=i)
    {
        swap(a,i,small);
        min_heapify(a,small,n);
    }
}

void build_minheap(int a[], int n)
{
    int i;
    for(i=n/2 ; i>=1 ; i--)
    {
        min_heapify(a,i,n);
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
    build_minheap(a,n);
    printf("\nMin Heap is : ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

