// Contest 1200 (Div. 2) Problem 1. - Hotelier

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    string s;
    cin>>l;
    cin>>s;

    int a[10]={0};

    for (int i=0;i<l;i++) {
        if (s.at(i) == 'L') {
            for (int j=0;j<10;j++) {
                if (a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        }
        if (s.at(i) == 'R') {
            for (int j=9;j>=0;j--) {
                if (a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        }
        else {
            int j = s[i] - '0';
            a[j] = 0;
        }
    }

    for (int i=0;i<10;i++) {
        cout<<a[i];
    }
    cout<<endl;
}