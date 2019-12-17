#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        int a,b,n,s;

        cin>>a>>b>>n>>s;

        int quotient = s/n;
        int remainder = s%n;

        if (a >= quotient)
        {
            if (remainder)
            {
                if (b >= remainder)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"YES"<<endl;
            }
            
        }
        else
        {
            int available = a*n;
            int remaining = s - (available);

            if (b >= remaining)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
    }
}