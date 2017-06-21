#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    int t,a[201],snakes,mongo,cnt,i,l;
    string s;
    s(t);
    while(t--)
    {
        memset(a,0,sizeof(a[0])*200);
        cnt=0;snakes=0;mongo=0;
        cin>>s;
        l = s.length();
        for(i=0;i<l;i++)
        {
            if(s[i] == 's')
                snakes++;
            if(s[i] == 'm')
                mongo++;
            if(s[i]=='m')
            {
                if(i-1 >= 0 && s[i-1] == 's' && a[i-1] == 0)
                {
                    cnt++;
                    a[i-1] = 1;
                }
                else if(i+1<l && s[i+1] == 's' && a[i+1]==0)
                {
                    cnt++;
                    a[i+1] = 1;
                }
            }
        }
        snakes -= cnt;
        if(snakes == mongo)
            cout<<"tie"<<endl;
        else if(snakes > mongo)
            cout<<"snakes"<<endl;
        else
            cout<<"mongooses"<<endl;
    }
	return 0;    
}  
