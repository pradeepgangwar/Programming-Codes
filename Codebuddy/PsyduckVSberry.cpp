#include<bits/stdc++.h>
using namespace std;

long int a[200]={0};
long int MAX=1000002;

void store()
{
    int i,j;
    for(i=0;i<(1<<7);i++)
    {
        for(j=7;j>=0;j--)
        {
            if(i&(1<<j))
            {
                a[i] = a[i]*10+1;
            }
            else
                a[i]=a[i]*10;
        }
    }
}

long int mincoin(long int s)
{
	long int dp[1000002],i,j,res;

	for(i=1;i<=s;i++)
		dp[i] = MAX;

	dp[0] = 0;

	for(i=1;i<=s;i++)
	{
		for(j=0;j<128;j++)
		{
			if(a[j] <= i)
			{
				res = dp[i-a[j]];
				if(res != MAX && res+1 < dp[i])
					dp[i] = res+1;
			}
		}
	}
	return dp[s];
}

void print()
{
    int i;
    for(i=0;i<128;i++)
        cout<<a[i]<<endl;
}

int main()
{
    long int t,n,ans;
    store();
    cin>>t;
    
    while(t--)
    {
    	cin>>n;
    	ans = mincoin(n);
    	cout<<ans<<endl;
    }
}
