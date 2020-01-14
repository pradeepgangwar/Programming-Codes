#include <bits/stdc++.h>
using namespace std;

long long int prime[1000010];
void sieve()
{
	for(long long int i=2; i*i<=1000000; i++)
	{
		if(prime[i] == 0)
		{
			for(long long int j=i*i; j<=1000000; j+=i)
			{
				prime[j] = 1;
			}
		}
	}
}

int main() {
	sieve();
	long long int n1, n;
	cin >> n1;
	n = n1;
	vector<long long int> factors;
	for(long long int i=2; i*i <= n; i++)
	{
		
		if(prime[i] == 0)
		{
			long long int cur = 1;
			while(n % i == 0)
			{
				cur = cur * i;
				n = n / i;
			}
			if(cur != 1)
				factors.push_back(cur);
		}
	}
	
	long long int m = factors.size();
	long long int ans1 = 1, ans2 = n1, maxx=n1;
	for(long long int i=0; i<(1<<m); i++)
	{
		long long int cur = 1;
		for(long long int j=0; j<m; j++)
		{
			if((i & (1<<j)) != 0)
			{
				cur = cur * factors[j];
			}
		}
		long long int cur1 = n1 / cur;
		if(max(cur, cur1) < maxx)
		{
			// cout << i << endl;
			maxx = max(cur, cur1);
			ans1 = cur;
			ans2 = cur1;
		}
	}
	cout << ans1 << " " << ans2 << endl;
	// your code goes here
	return 0;
}