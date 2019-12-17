#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, a[1000000];

        cin>>n;
        map <int, int> evens;
        map <int, int> :: iterator it;

        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]%2 == 0)
            {
                evens[a[i]]++;
            }
        }
        int count = 0;
        while (!evens.empty())
        {
            it = --evens.end();
            int a = it->first;
            int b = it->second;

            int new_key = a/2;
            if (new_key%2 == 0)
                evens[new_key] += b;
            evens.erase(a);
            count++;
        }
        cout<<count<<endl;
    }
}