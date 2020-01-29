#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		if(n&1)
			cout << 7;
		else
			cout << 1;
		for(int i=1; i<n/2; i++)
		{
			cout << 1;
		}
		cout << endl;
	}
	// your code goes here
	return 0;
}