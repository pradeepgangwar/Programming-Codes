#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,m,a;

        cin>>n>>m;

        vector <ll> A(n+8);
        vector <ll> B;

        for (ll i=0; i<n; i++)
        {
            cin>>a;
            A[a] = i;
        }
        for (ll i=0; i<m; i++)
        {
            cin>>a;
            B.push_back(a);
        }

        ll answer = 0, pre_found = A[B[0]], found = 0;

        answer += pre_found*2 + 1;
        found++;

        for (ll i=1; i<B.size(); i++)
        {
            if (A[B[i]] < pre_found)
            {
                answer++;
                found++;
            }
            else
            {
                pre_found = A[B[i]];
                answer += (pre_found-found)*2 + 1;
                found++;
            }
        }

        cout<<answer<<endl;
    }
}