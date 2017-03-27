#include<stdio.h>

int partition(int arr[], int low, int high)
{
    int i,j,pivot,temp;

    pivot = arr[high];

    i = low-1;
    for(j=low ; j<=high ; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;

            temp = arr[i];
            arr[i] = arr[j];            //swapping arr[i] &arr[j]
            arr[j] = temp;
        }
    }

    return i;
}

int quicksort(int arr[], int low, int high)
{
    int pivot;
    if (low < high)
    {
        pivot = partition(arr,low,high);

        quicksort(arr,pivot+1,high);
        quicksort(arr,low,pivot-1);
    }
}

int main()
{
	int arr[100],low,high,i,n;
	printf("How many elements you want in your array? : ");
	scanf("%d",&n);
	printf("\nEnter %d numbers:\n",n);
	for(i=0 ; i<n ; i++)
	{
        scanf("%d",&arr[i]);
	}
	printf("\nEnter the range indexed at 0 from low to high you want the array to be sorted:\nLow: ");
	scanf("%d",&low);
	printf("High: ");
	scanf("%d",&high);

	quicksort(arr,low,high);

	for(i=0 ; i<n ; i++)
	{
        printf("%d ",arr[i]);
	}
	return 0;
}
