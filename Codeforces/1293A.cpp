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
    int t;
    cin>>t;

    while(t--)
    {
	    int n,s,k;
        unordered_set <int> closed;
        cin>>n>>s>>k;

        for (int i=0; i<k; i++)
        {
            int temp;
            cin>>temp;
            closed.insert(temp);
        }
        int i=s, j=s;
        while(true)
        {
            if (closed.find(i) != closed.end() && closed.find(j) != closed.end())
            {
                i--;
                j++;
                if (i == 0)
                    i = 1;
                if (j == n+1)
                    j = n;
            }
            else
            {
                if (closed.find(i) == closed.end())
                {
                    cout<<s-i<<endl;
                    break;
                }
                else if (closed.find(j) == closed.end())
                {
                    cout<<j-s<<endl;
                    break;
                }
                else
                {
                    cout<<min(s-i, j-s)<<endl;
                    break;
                }
            }
        }
    }
}