#include <bits/stdc++.h>

using namespace std;

unsigned long long digitSum(unsigned long long n) 
{ 
    unsigned long long sum = 0; 
    while (n > 0) { 
        sum += n % 10; 
        n /= 10; 
    } 
    return sum;
} 

unsigned long long number(unsigned long long n) 
{ 
    unsigned long long sum = digitSum(n); 
    unsigned long long num = 10 - sum % 10; 
    return (10 * n + num%10); 
} 

int main()
{
    unsigned long long t;

    cin>>t;
    while(t--)
    {
        unsigned long long a;
        cin>>a;
        cout<<number(a)<<endl;
    }
}
