// Contest 1200 (Div. 2) Problem 2 - Block adventure
    
#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        bool flag = true;
        int a[1000];
        cin>>n>>m>>k;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for (int i=0; i<n-1; i++)
        {
            if (abs(a[i]-a[i+1]) > k) {
                if (a[i] > a[i+1]) {
                    int canBeRemoved = (a[i] - a[i+1]) + k;
                    if (a[i] > canBeRemoved) {
                        m += canBeRemoved;
                    }
                    else {
                        m += a[i];
                    }
                }
                else {
                    int needed = (a[i+1] - k) - a[i];
                    if (m >= needed) {
                        m -= needed;
                    }
                    else {
                        cout<<"NO"<<endl;
                        flag = false;
                        break;
                    }
                }
            }
            else {
                if (a[i] >= a[i+1]) {
                    int canBeRemoved = (a[i] - a[i+1]) + k;
                    if (a[i] > canBeRemoved) {
                        m += canBeRemoved;
                    }
                    else {
                        m += a[i];
                    }
                }
                else {
                    int canBeRemoved = k - (a[i+1] - a[i]);
                    if (a[i] > canBeRemoved) {
                        m += canBeRemoved;
                    }
                    else {
                        m += a[i];
                    }
                }
            }
        }
        if (flag) {
            cout<<"YES"<<endl;
        }
    }
}