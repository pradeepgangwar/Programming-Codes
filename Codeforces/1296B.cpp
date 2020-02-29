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

    while (t--)
    {
        int n;
        cin>>n;

        int spent = 0;

        while(n >= 10)
        {
            int cashback = (n/10);
            spent += cashback*10;

            n = cashback + (n%10);
        }

        spent += n%10;

        cout<<spent<<endl;
    }
}
