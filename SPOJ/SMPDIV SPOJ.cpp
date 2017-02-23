#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c,i;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        for(i=b;i<a;i+=b)
        {
            if(i%c==0)
                continue;
            else
                cout<<i<<' ';
        }
        cout<<endl;
    }
    return 0;
}
