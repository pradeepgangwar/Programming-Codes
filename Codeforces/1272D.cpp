#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[300000];
    cin>>n;

    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int l[300000], r[300000], maximum = 1;

    r[0] = 1; l[n-1] = 1;
    for (int i=1; i<n; i++)
    {
        if (a[i] > a[i-1])
        {
            r[i] = r[i-1] + 1;
            maximum = r[i] > maximum ? r[i] : maximum;
        }
        else
        {
            r[i] = 1;
        }
    }
    for (int i=n-2; i>=0; i--)
    {
        if (a[i] < a[i+1])
        {
            l[i] = l[i+1] + 1;
            maximum = l[i] > maximum ? l[i] : maximum;
        }
        else
        {
            l[i] = 1;
        }
    }

    for (int i=1; i<n-1; i++)
    {
        if (a[i-1] < a[i+1])
        {
            int val = r[i-1] + l[i+1];
            maximum = val > maximum ? val : maximum; 
        }
    }
    cout<<maximum<<endl;
}