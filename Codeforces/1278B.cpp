#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--)
    {
        long long int a,b;

        cin>>a>>b;

        if (a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            long long int x = max(b,a);
            long long int answer;

            while(true)
            {
                long long int diff = (2*x) -a -b;
                long long int equation_c = 2*diff;

                long long int equation_b = 1;
                long long int equation_a = 1;

                long double discriminant = sqrt(1 + 4*equation_c);

                if (discriminant - (long long int)(discriminant) == 0)
                {
                    long long int denominator = 2;
                    
                    long long int numerator = (long long int)(discriminant) - 1;

                    answer = numerator/denominator;
                    cout<<answer<<endl;
                    break;
                }            
                else
                {
                    x++;
                    continue;
                }        
            }
        }
    }
}