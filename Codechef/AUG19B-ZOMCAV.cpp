#include  <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, c[1000000], h[1000000], v[1000000]={0};
        bool flag = true;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>c[i];
            
            int l = max(0, i-c[i]);
            int r = min(n, i+c[i]);

            v[l] += 1;
            v[r+1] -= 1;
        }
        for (int i=0; i<n; i++)
        {
            cin>>h[i];
        }
        for (int i=1; i<n; i++)
        {
            v[i] = v[i-1] + v[i];
        }

        sort(v, v+n);
        sort(h, h+n);
        
        for (int i=0; i<n; i++)
        {
            if (v[i] != h[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}