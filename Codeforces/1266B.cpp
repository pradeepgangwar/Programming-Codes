#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;

    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;

        long long int a = n%14;

        if (n<15)
        {
            cout<<"NO"<<endl;
        }
        else if (a>=1 && a<=6)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}