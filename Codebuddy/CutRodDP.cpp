#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001]={0};

void cutrod(int a[], int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i)
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-i]+a[i]);
			}
			else
				dp[i][j] = dp[i-1][j];
		}
	}
}

int main()
{
	int t,n,i,j,a[1001];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		cutrod(a,n);
		cout<<dp[n][n]<<endl;
	}
}
