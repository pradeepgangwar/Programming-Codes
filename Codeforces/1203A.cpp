// Contest 1203 (Div. 3) Problem 1. - Circle of Students

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
        bool clockwise = true;
        bool anticlockwise = true;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        // Check clockwise
        for (int i=1; i<n; i++)
        {
            if (a[i] == 1 && a[i-1] != n)
            {
                clockwise = false;
                break;
            }
            else if (a[i] != 1 && a[i] != a[i-1]+1)
            {
                clockwise = false;
                break;
            }
        }

        // anti clockwise
        for (int i=0; i<n-1; i++)
        {
            if (a[i] == 1 && a[i+1] != n)
            {
                anticlockwise = false;
                break;
            }
            else if (a[i] != 1 && a[i] != a[i+1]+1)
            {
                anticlockwise = false;
                break;
            }
        }

        if (clockwise || anticlockwise)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
