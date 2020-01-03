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
        ll a[3];
        for (int i=0; i<3; i++)
        {
            cin>>a[i];
        }

        sort(a, a+3);

        // for (int i=0; i<3; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;

        if (a[2]-1 > a[0]+a[1])
        {
            cout<<"No"<<endl;
        }
        else 
        {
            cout<<"Yes"<<endl;
        }
    }
}