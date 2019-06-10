#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,t,position;
	cin >> t;
	while(t--)
	{
		cin >> n;
		position = ffs(~n);
		long long int x = 1 << (position - 1);
		n = n ^ x;
		cout << n << endl;
	}
}