// Contest 1203 (Div. 3) Problem 2. - Equal rectangles

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        int a[10000];
        bool isPossible = true;
        cin>>n;
        for (int i=0; i<4*n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+(4*n));
        int area = a[0]*a[4*n-1];
        for (int i=0; i<n; i++)
        {
            if (a[2*i] != a[2*i + 1])
            {
                isPossible = false;
                break;
            }
            if (a[4*n - 2*i - 1] != a[4*n - 2*i - 2])
            {
                isPossible = false;
                break;
            }
            if (a[2*i]*a[4*n - 2*i - 1] != area)
            {
                isPossible = false;
                break;
            }
        }
        if (isPossible)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
