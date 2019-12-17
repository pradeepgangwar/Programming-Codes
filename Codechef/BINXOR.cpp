#include <bits/stdc++.h>
using namespace std;

long long int fac[300005];

void precompute()
{
    fac[0] = 1;
    fac[1] = 1;
    for (int i=2; i<300003; i++)
    {
        fac[i] = (fac[i-1] * i);
        fac[i] = fac[i] % 1000000007; 
    }
}

int main()
{
    precompute();

    long long int t,n;

    cin>>t;
    while (t--)
    {
        string a,b;

        cin>>n;
        cin>>a>>b;

        long long int a_one=0, b_one=0, a_zero=0, b_zero=0;

        for (int i=0; i<n; i++)
        {
            if (a[i] == '1')
            {
                a_one++;
            }
            if (a[i] == '0')
            {
                a_zero++;
            }
            if (b[i] == '1')
            {
                b_one++;
            }
            if (b[i] == '0')
            {
                b_zero++;
            }
        }

        long long int max_one = min(a_one, b_zero) + min(a_zero, b_one);
        long long int min_one = n - (min(a_one, b_one) + min(a_zero, b_zero));

        long long int answer = 0;

        // for (int i=1; i<100; i++)
        // {
        //     cout<<fac[i]<<endl;
        // }

        for (int i=max_one; i>=min_one; i-=2)
        {
            long long int denominator = (fac[i] * fac[n-i]);
            denominator = denominator % 1000000007;
            long long int numerator = fac[n];

            answer += (numerator/denominator);
            answer = answer%1000000007;
        }

        cout<<answer<<endl;
    }
}