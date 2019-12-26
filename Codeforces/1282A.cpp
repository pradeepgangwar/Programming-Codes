#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long a,b,c,r;

        cin>>a>>b>>c>>r;

        if (a>b)
        {
            swap(a,b);
        }

        long long min_range = c-r;
        long long max_range = c+r;

        if (min_range<=a && max_range>a && max_range<b)
        {
            cout<<b-max_range<<endl;
        }
        else if (min_range<=a && max_range>a && max_range>=b)
        {
            cout<<0<<endl;
        }
        else if (min_range == a && max_range<b)
        {
            cout<<b-max_range<<endl;
        }
        else if (min_range>a && min_range<b && max_range<b)
        {
            cout<<(min_range-a)+(b-max_range)<<endl;
        }
        else if (min_range>a && min_range<b && max_range>=b)
        {
            cout<<(min_range-a)<<endl;
        }
        else if (min_range>=b)
        {
            cout<<b-a<<endl;
        }
        else if (max_range <= a)
        {
            cout<<b-a<<endl;
        }
        else if (max_range>=b)
        {
            cout<<0<<endl;
        }
    }
}