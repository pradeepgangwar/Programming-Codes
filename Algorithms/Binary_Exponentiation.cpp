#include <bits/stdc++.h>

using namespace std;

// Not using MOD here. We can use the mod to cut short the answer to stay in limits
#define MOD 1000000007

long long binary_exponentiation(long long a, long long b)
{
    long long result = 1;
    while (b>0) {
        if (b%2 == 1) {
            result = result*a;
        }
         b = b/2;
         a = a*a;
    }
    return result;
}

int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<binary_exponentiation(a,b)<<endl;
}