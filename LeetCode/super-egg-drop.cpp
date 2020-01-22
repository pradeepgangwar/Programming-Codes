#include <bits/stdc++.h>
using namespace std;

int dp[30006][500]={0};

int superEggDrop(int K, int N)
{
    for (int i=0; i<=N; i++)
    {
        dp[i][1] = i;
    }
    for (int i=0; i<=K; i++)
    {
        dp[1][i] = 1;
    }
    
    for (int i=2; i<=N; i++)
    {
        for (int j=2; j<=K; j++)
        {
            dp[i][j] = INT_MAX;
            int l=1,r=i-1;
            while (l+1<r)
            {
                int mid = (l+r)/2;
                int temp1 = dp[mid-1][j-1];
                int temp2 = dp[i-mid][j];
                
                if (temp1<temp2)
                    l = mid;
                else if (temp1>temp2)
                    r = mid;
                else
                {
                    l=mid;
                    r=mid;
                }
            }
            dp[i][j] = 1+min(max(dp[l-1][j-1],dp[i-l][j]), max(dp[r-1][j-1], dp[i-r][j]));
        }
    }
    return dp[N][K];
}
