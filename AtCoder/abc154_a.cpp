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
    string s,t,u;
    int a,b;

    cin>>s>>t;
    cin>>a>>b;
    cin>>u;

    if (u.compare(s) == 0)
    {
        cout<<a-1<<" "<<b<<endl;
    }
    else
    {
        cout<<a<<" "<<b-1<<endl;   
    }
}