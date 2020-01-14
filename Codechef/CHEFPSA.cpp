#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 100003

ll fac[MAX], sum=0;

void factorial()
{
    fac[0] = 1;
    FOR(i,1,MAX)
        fac[i] = (i*fac[i-1])%mod;
}

ll power(ll a , ll n)
{
	ll res = 1;
	while(n)
	{
		if(n & 1)
			res = (res * a) % mod;
		
		n >>= 1;
		a = (a * a) % mod;
	}
	return res;
}

int main()
{
    FAST_IO;
    factorial();
    ll t;
    cin>>t;

    while(t--)
    {
        sum = 0;
        ll n, ans, a[MAX];
        map <ll, ll> count;
        cin>>n;

        FOR(i,0,2*n)
        {
            cin>>a[i];
            count[a[i]]++;
            sum += a[i];
        }

        if (sum%(n+1) != 0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            ll seq_sum = sum/(n+1);

            if (count.find(seq_sum)!=count.end() && count[seq_sum]>=2)
                count[seq_sum] -= 2;
            else
            {
                cout<<0<<endl;
                continue;
            }
            ans = fac[n-1];

            map <ll, ll> :: iterator it;

            for (it=count.begin(); it!=count.end(); it++)
            {
                int a = it->first;
                int b = seq_sum-a;
                int cnt = count[a];

                if (cnt == 0)
                    continue;

                if (count.find(b) != count.end())
                {
                    if (cnt != count[b])
                    {
                        ans = 0;
                        // cout<<"test"<<endl;
                        break;
                    }
                    else
                    {
                        if (2*a == seq_sum && cnt%2 != 0)
                        {
                            ans = 0;
                        // cout<<"testhh"<<endl;
                            break;
                        }
                        else
                        {
                            if (2*a == seq_sum)
                            {
                                ll tot = cnt/2;
                                ans = (ans * power(fac[tot] , mod - 2)) % mod;
				                cnt = 0 ;
                            }
                            else
                            {
                                ll tot = cnt;
                                count[b] = 0;
                                
                                ans = (ans * power(fac[tot] , mod - 2)) % mod;
                                ans = (ans * power(2 , tot)) % mod;
                            }
                        }
                    }
                }
                else
                {
                    ans = 0;
                        // cout<<"testtt"<<endl;
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
}