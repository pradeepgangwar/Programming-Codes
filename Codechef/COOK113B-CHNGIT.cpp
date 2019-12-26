#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n, a[1000], number[1000]={0};
        int max = INT_MIN;
        cin>>n;

        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            number[a[i]]++;
            if (number[a[i]]>max)
            {
                max = number[a[i]];
            }
        }

        cout<<n-max<<endl;
    }
}