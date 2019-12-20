#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        string s;
        cin>>s;

        int zero=0, even=0, sum = 0;

        for (int i=0; i<s.length(); i++)
        {
            int a;
            a = int(s[i]) - 48;
            
            if (a == 0)
            {
                zero++;
            }
            if (a%2 == 0)
            {
                even++;
            }
            sum += a;
        }

        if (zero == 0)
        {
            cout<<"cyan"<<endl;
        }
        else if (zero == s.length())
        {
            cout<<"red"<<endl;
        }
        else if (zero > 1 && sum%3 == 0)
        {
            cout<<"red"<<endl;
        }
        else if (zero == 1 && even > 1 && sum%3 == 0)
        {
            cout<<"red"<<endl;
        }
        else 
        {
            cout<<"cyan"<<endl;
        }
    }
}