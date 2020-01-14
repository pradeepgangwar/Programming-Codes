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

    ll n;
    cin>>n;

    string s;
    cin>>s;
    ll left=0, right=0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == 'L')
            left++;
        if (s[i] == 'R')
            right++;
    }

    cout<<left+right+1<<endl;
    
}