#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

#define N 200008

int main()
{
    FAST_IO;

    string s,ss;
    cin>>s>>ss;

    ll rightmost[N], pointer=ss.length()-1;

    FOR_REV(i,s.length(),0)
    {
        if(pointer < 0)
        {
            break;
        }
        if(ss[pointer] == s[i])
        {
            rightmost[pointer] = i;
            pointer--;
        }
    }

    ll pos=0, answer=0;

    FOR(i,0,s.length())
    {
        if (pos < ss.length())
        {
            answer = max(answer, rightmost[pos] - i);
        }
        else
        {
            answer = max(answer, (long long)s.length() - i);
        }
        if(ss[pos] == s[i] && pos < ss.length())
        {
            pos++;
        }
    }
    cout<<answer<<endl;

    return 0;
}