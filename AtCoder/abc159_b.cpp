#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

bool check_pall (string s, int l, int r)
{
    while (l<r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;

    int len = s.length();

    if (check_pall(s,0,len-1) && check_pall(s,0,(len/2)-1) && check_pall(s,((len+3)/2)-1, len-1))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
