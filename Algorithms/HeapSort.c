/*Heap Sort*/

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

void heap_sort(int a[], int n)
{
    int i;
    int size = n;
    build_maxheap(a,n);
    printf("\nHeap is : ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=n ; i>=2 ; i--)
    {
	printf("1 = %d %d = %d\n",a[1],i,a[i]);
        swap(a,1,i);
	printf("1 = %d %d = %d\n",a[1],i,a[i]);
        size = size - 1;
        max_heapify(a,1,size);
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
    heap_sort(a,n);
    printf("\nSorted array is : ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

