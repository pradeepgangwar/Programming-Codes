// Contest 1203 (Div. 3) Problem 3.

#include <bits/stdc++.h>
using namespace std;

int ans=0;

void findDivisor(long long int a)
{
    for (int i = 1; i * 1ll * i <= a; ++i) {
		if (a%i == 0) {
			++ans;
			if (i != a/i) {
				++ans;
			}
		}
	}
} 

int main()
{
    long long int n, x;
    cin>>n;
    long long int result=0;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        result = __gcd(result, x);
    }

    findDivisor(result);

    cout<<ans<<endl;
}
