/* Selection Sort*/

#include<stdio.h>

void swap(int pos, int pos1, int a[])
{
    int temp;
    temp = a[pos];
    a[pos] = a[pos1];
    a[pos1] = temp;

    return;
}

int main()
{
    int a[1000],n,pos,pos1,min,i,j;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0 ;i<n-1 ; i++)
    {
        pos = i;
        min = a[pos];
        for (j=i;j<n;j++)
        {
            if(a[j] <= min)
            {
                min = a[j];
                pos1 = j;
            }
        }
        swap(pos,pos1,a);
    }
    printf("The final array is : ");
    for (i=0 ; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
	printf("\n");
}
