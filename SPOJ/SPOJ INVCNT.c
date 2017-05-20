#include <stdio.h>

long long int count=0,t;

void merge(long long int arr[], long long int l, long long int m, long long int r)
{
	long long int i,j,k,flag = 0;
	long long int n1=m-l+1;
	long long int n2=r-m;
	long long int left[n1],right[n2];
	for (i=0;i<n1;i++)
		left[i]=arr[l+i];
	for (j=0;j<n2;j++)
		right[j]=arr[m+1+j];
	i=0;j=0;k=l;
	while (i<n1 && j<n2)
	{
		if (left[i]<=right[j])
        {
            arr[k]=left[i++];
        }
		else
        {
            arr[k]=right[j];
            //prlong long intf("i = %d\n",i);
			count+= n1-i;
			j++;
        }
		k++;
	}
	while (i<n1)
	{
		arr[k]=left[i++];
		k++;
	}
	while (j<n2)
	{
		arr[k]=right[j++];
		k++;
	}
}

void mergesort(long long int arr[], long long int l, long long int r)
{
    long long int j;
	if (l<r)
	{
		long long int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

long long int main()
{
	long long int n,i,arr[200003],j;
	scanf("%lld",&n);
	for (i=0;i<n;i++)
    {
        scanf("%lld",&t);
        for (j=0;j<t;j++)
        {
            scanf("%lld",&arr[j]);
        }
        mergesort(arr,0,t-1);
        printf("%lld\n",count);
        count=0;
    }

	return 0;
}
