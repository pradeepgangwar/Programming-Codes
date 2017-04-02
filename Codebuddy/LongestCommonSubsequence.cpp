#include<bits/stdc++.h>
using namespace std;

string a,b;
int l1,l2,dp[3002][3002];

void com_sub()
{
    int x,y;
    for(x=0;x<=l1;x++)
    {
        for(y=0;y<=l2;y++)
        {
            if(x==0 || y==0)
                dp[x][y]=0;
            else if(a[x-1]==b[y-1])
                dp[x][y] = dp[x-1][y-1]+1;
            else
                dp[x][y] = max(dp[x-1][y],dp[x][y-1]);
        }
    }
}

int main()
{
    int t,ans;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        l1 = a.length();
        l2 = b.length();
        com_sub();
        cout<<dp[l1][l2]<<endl;
    }
}
