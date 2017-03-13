#include <stdio.h>

int main()
{
	int a[1003],b[1003]={0},n,m,x,y,z,temp=0,max=0,i,j,k;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);

	}
	scanf("%d",&m);

    for(j=0;j<m;j++)
    {
    	temp=0;max=0;
    	scanf("%d %d %d",&x,&y,&z);
    	if(x==1)
    	{
    	    for(k=y;k<=z;k++)
                b[a[k]]=0;
    	    for(k=y;k<=z;k++)
    	    b[a[k]]++;
    		for(k=y;k<=z;k++)
    		{
    			if(b[a[k]]>=temp)
    			  {temp=b[a[k]];
    			   }
    		}
    		printf("%d\n",temp);
    	}
    	if(x==2)
    	{
    		a[y]=z;
    		b[a[y]]++;
    	}
    }
	return 0;
}
