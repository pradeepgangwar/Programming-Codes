//codeblooded problem on hackerearth

#include<bits/stdc++.h>
using namespace std;

long long power(long long int x, long long int y, long long int p)
{
    long long int res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    long long int n,c,i,b[200008];

    cin>>n;

    for(i=0;i<2*n;i++)
        cin>>b[i];

    for(i=0;i<2*n;i+=2)
      {
          c = (long long int)power(b[i],b[i+1],1000000007);
          cout<<c<<endl;
      }

    return 0;
}
Language: C++
