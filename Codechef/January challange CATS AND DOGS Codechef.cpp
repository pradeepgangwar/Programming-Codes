#include<iostream>
using namespace std;

int main()
{
    long long int n,a,b,c,com;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(c%4==0)
        {
            if((4*(a+b)-8*b)>=4*b)
                com=(4*(a+b)-8*b);
            else
                com=4*b;
        }

        if(c%4==0)
        {
            if(c>=com&&c<=(4*(a+b)))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
            cout<<"no"<<endl;
    }

    return 0;
}
