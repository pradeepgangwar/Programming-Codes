#include <bits/stdc++.h>
using namespace std;

bool is_sol(long long x, long long a[], long long n, long long m)
{
    long long day = 1;
    long long hours = 0;
    for (int i=0; i<n; i++)
    {
        hours += a[i];
        if (hours>x)
        {
            day++;
            hours = 0;
            i--;
        }
    }
    if (day <= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long long n,m, a[100005], max=INT_MIN, sum=0;
    cin>>n>>m;
    
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    
    long long l = max, r = sum, mid;
    long long count=0;
    while(l<r && count<300)
    {
        mid  = (l+r)/2;
        count++;
        if (is_sol(mid, a, n, m))
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<mid<<endl;
}