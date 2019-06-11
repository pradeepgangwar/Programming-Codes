#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

long long binary_exponentiation(long long a, long long b)
{
    long long result = 1;
    while (b>0) {
        if (b%2 == 1) {
            result = (result*a) % MOD;
        }
         b = b/2;
         a = (a*a) % MOD;
    }
    return result % MOD;
}

int main() {
    long long t,k;
    cin>>t;

    while(t--) {
        cin>>k;
        long long power = binary_exponentiation(2,k-1);
        cout<<(10*power)%MOD<<endl;
    }
}