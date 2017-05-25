#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
 
int main()
{
    int t,l,i,flag=0,done = 0;
    string s;
 
    s(t);
    
    while(t--)
    {
        flag =0;done = 0;
        s(l);
        cin>>s;
        for(i=0;i<l;i++)
        {
            //cout<<"t "<<t<<endl;
            if(s[i] == 'H' && flag == 0)
                flag = 1;
            else if(s[i] == 'H' && flag != 0)
            {
                cout<<"Invalid"<<endl;
                done = 1;
                break;
            }
            
            if(s[i] == 'T' && flag == 1)
            {
               flag = 0;
            }
            else if(s[i] == 'T' && flag != 1)
            {
                cout<<"Invalid"<<endl;
                done = 1;
                break;
            }
            //cout<<"i "<<i<<"flag "<<flag<<endl;
        }
        if(done == 0 && flag == 1)
            cout<<"Invalid"<<endl;
        else if(done == 0 && flag == 0)
            cout<<"Valid"<<endl;
    }
    
} 