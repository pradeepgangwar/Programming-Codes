#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

int main()
{
    FAST_IO;

    ll n,k;
    cin>>n>>k;

    vector <ll> answer;

    for (int i=1; i<=k+1; i++)
    {
        cout<<"? ";

        for (int j=1; j<=k+1; j++)
        {
            if (j!=i)
                cout<<j<<" ";
        }
        cout<<endl;
        cout.flush();

        ll element, pos;
        cin>>pos>>element;
        answer.pb(element);
    }

    ll maxi = *max_element(answer.begin(), answer.end());
    cout<<"! "<<count(answer.begin(), answer.end(), maxi)<<endl;
}