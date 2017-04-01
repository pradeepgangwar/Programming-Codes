#include<iostream>
using namespace std;

int MAX = 100002;

int mincoin(int a[], int n, int s)
{
	int dp[10002],i,j,res;

	for(i=1;i<=s;i++)
		dp[i] = MAX;

	dp[0] = 0;

	for(i=1;i<=s;i++)
	{
		for(j=0;j<n;j++)
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

int main()
{
	int a[100002],t,n,ans,i,s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		for(i=0;i<n;i++)
			cin>>a[i];

		ans = mincoin(a,n,s);
		if(ans == MAX)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
	}
}
