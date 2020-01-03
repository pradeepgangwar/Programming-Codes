#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll left_candies = n%k;

        if (left_candies == 0)
        {
            cout<<n<<endl;
        }
        else
        {
            int half = int(k/2); 
            if (left_candies > half)
            {
                left_candies -= half;
                cout<<n-left_candies<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
        }
    }
}
