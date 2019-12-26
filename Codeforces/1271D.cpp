#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int dp[5004][5004];
int a[6000], b[6000], c[6000], protect[6000];
vector <int> vec[5002];

int capture()
{
    memset(dp, -1, sizeof dp);
    dp[1][k] = 0;

    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<=5000; j++)
        {
            if (j>=a[i] && dp[i][j]>=0)
            {
                dp[i+1][j+b[i]] = max(dp[i+1][j+b[i]], dp[i][j]);
            }
        }
        for (int x=0; x<vec[i].size(); x++)
        {
            for (int j=1; j<=5000; j++)
            {
                if (dp[i+1][j]>=0)
                {
                    dp[i+1][j-1] = max(dp[i+1][j-1], (dp[i+1][j]+vec[i][x]));
                }
            }
        }
    }
    int answer = -1;
    for(int j = 0; j <= 5000; ++j)
        answer = max(answer, dp[n+1][j]);
    
    return answer;
}

int main()
{
    cin>>n>>m>>k;

    int u[300004], v[300004];

    for (int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        protect[i] = i;
    }

    for (int i=1; i<=m; i++)
    {
        cin>>u[i]>>v[i];
        protect[v[i]] = max(protect[v[i]], u[i]);
    }
    for (int i=1; i<=n; i++)
    {
        vec[protect[i]].push_back(c[i]);
    }

    int answer = capture();
    cout<<answer<<endl;
} 