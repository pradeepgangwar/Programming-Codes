#include <stdio.h>

int main(void) {

	long long int n,a[20009],i,j,count=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	  scanf("%lld",&a[i]);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	          count++;
	    }
	}
	printf("%lld",count);

	return 0;
}
