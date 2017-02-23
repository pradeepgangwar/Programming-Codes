/*#include<stdio.h>
int main()
{
    int count=0,i,j,a,d=1;
    scanf("%d",&a);
    int b[1000]={0},c[100]={0};
    for(i=2;i<1000;i++)
    {
        if (b[i]==0)
      {
        for(j=i;j*i<1000;j++)
            b[i*j]=1;
      }
    }

    for(i=2;d<=a;i++)
    {
        if (b[i]==0)
          {c[d]=i;d++;}
    }
    printf("%d",c[a]);
    return 0;
}
*/
#include <iostream>
using namespace std;

int main()
{
	long long int i,j,a,d=1;
	long long int b[10000000]={0},c[3002]={0};
	cin>>a;
    for(i=2;i<10000;i++)
    {
    		if(b[i]==0)
    		{
    			for(j=i;j*i<1000000000;j++)
    			{
    				b[i*j]=1;
    			}
    		}
    }
    for(i=2;d<=a;i++)
    {
    	if(b[i]==0)
    	{
    		c[d]=i;d++;
    	}
    }
    cout<<c[a];
    return 0;
}
