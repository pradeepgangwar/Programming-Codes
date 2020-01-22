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
	int a,b;
  	cin>>a>>b;
  	string ans;
 
  	if (a == b)
    {
      	for (int i=0; i<a; i++)
        {
          	ans += to_string(a);
        }
      	cout<<ans<<endl;
    }
  	else
    {
      	if (a>b)
        {
          	for (int i=0; i<a; i++)
            {
              	ans+= to_string(b);
            }
          	cout<<ans<<endl;
        }
      	else
        {
          	for (int i=0; i<b; i++)
            {
              	ans += to_string(a);
            }
          	cout<<ans<<endl;
        }
    }
}