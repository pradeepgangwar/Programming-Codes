// Bubble sort

#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
	printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
	printf("\n");
	return 0;
}
