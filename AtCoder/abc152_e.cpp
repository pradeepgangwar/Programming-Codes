// Not working as expected

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

const ll M = 1e9 + 7;
ll mod( ll n, ll m=M ){ n%=m,n+=m,n%=m;return n; }

ll modpow(ll a,ll b)
{
	if(b == 0)
		return 1;
	long long val = modpow(a,b/2);
	val = (val * val)%M;
	if(b % 2)
		val = (val * a) % M;
	return val;
}
 
int mmi(int x){
	return modpow(x,M-2);
}
int mdiv(long long a,int b){
	return (a * mmi(b))%M;
}

int main()
{
    FAST_IO;
	int n;
    cin>>n;

    int a[n+3];

    unordered_map <int, int> cnt;

    FOR(i,0,n)
        cin>>a[i];

    FOR(i,0,n)
    {
        map <int, int> m;
        int temp = a[i];
        if (temp == 2 || temp == 3)
        {
            m[temp]++;
            cnt[temp] = max(cnt[temp], m[temp]);
        }
        for(int j=2; j*j<=a[i]; j++)
        {
            while(temp%j == 0)
            {
                m[j]++;
                temp = temp/j;
            }
            cnt[j] = max(cnt[j], m[j]);
        }
        if(temp != 1 )
        {
            m[temp]++;
            cnt[temp] = max(cnt[temp],m[temp]);
        }
    }

    long long lcm = 1;
    for (auto it : cnt)
    { 
          lcm = mod(lcm * modpow(it.first, it.second)); 
    }
    // cout<<lcm<<endl;
    int ans = 0;
    for(int i=0;i<n;i++){
    	int temp = a[i],tema = a[i];
    	int curval = lcm;
    	for(int j=2;j<=sqrt(temp);j++){
    		int cnt = 0;
    		while(tema % j == 0){
    			tema = tema/j;
    			cnt++;
    		}
    		if(cnt){
    			curval = mdiv(curval,modpow(j,cnt));
    		}
    	}
    	curval = mdiv(curval,tema);
    	ans += curval;
    	ans = ans % M;
    }
    cout<<ans<<endl;
}