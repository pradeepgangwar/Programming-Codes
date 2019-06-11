#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int d,l,i;
        int present = 0, absent = 0, proxy = 0;
        string s;

        cin>>d;
        cin>>s;
        for (int i=0; i<d; i++)
        {
            if (s[i] == 'P')
            {
                present++;
            }
            else
            {
                absent++;
                if (i>1 && i<d-2 && (s[i-1] == 'P' || s[i-2] == 'P') && (s[i+1] == 'P' || s[i+2] == 'P'))
                {
                    proxy++;
                }
            }
        }
        int mustPresent = ceil(0.75*(float)d);
        if (present >= mustPresent) {
            cout<< 0 <<endl;
        }
        else if (present + proxy >= mustPresent) {
            cout << mustPresent - present <<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
}
