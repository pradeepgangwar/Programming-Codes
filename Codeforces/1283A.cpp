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
        ll h,m;
        cin>>h>>m;

        ll minutes = 0;
        minutes += 60-m;
        minutes += (23-h)*60;

        cout<<minutes<<endl;
    }
}