#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int W, int w[], int v[], int n)
{
    int i,j;
    int k[1001][1001];

    for (i=0;i<=n;i++) {
        for (j=0;j<=W;j++) {
            if (i==0 || j==0) {
                k[i][j] = 0;
            }
            else if (w[i-1]<=j) {
                k[i][j] = max(v[i-1] + k[i-1][j-w[i-1]], k[i-1][j]);
            }
            else {
                k[i][j] = k[i-1][j];
            }
        }
    }

    return k[n][W];
}

int main()
{
    int t,n,k,rack,i,j,a;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        int r[101]={0};
        for(i=0;i<n;i++) {
            cin>>rack;
            for(j=0;j<rack;j++) {
                cin>>a;
                r[i]+=a;
            }
        }
        int answer = knapsack(k,r,r,n);
        cout<<answer<<endl;
    }

    return 0;
}