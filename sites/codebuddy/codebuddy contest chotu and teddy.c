#include <stdio.h>

int main() {

	long long int n,a,i,p=0,j,c;
	scanf("%lld",&n);

	for(i=0;i<n;i++)
	{   p=0;
	    scanf("%lld %lld",&a,&c);
	    for(j=0;j<=a;j++)
            p=p+j;
        if(p>=c)
            {printf("YES\n");}
        else
            printf("NO\n");
	}

	return 0;
}
