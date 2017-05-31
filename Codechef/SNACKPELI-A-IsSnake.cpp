#include <bits/stdc++.h>
using namespace std;
 
int vis[3][502] = {0},cnt=0,num=0,num1;
char s1[1000],s2[1000];
 
int doit(int i,int pos)
{
    int postemp=0,j;
    if(pos == 1)
    {
        if(vis[1][i+1]!=1 && s1[i+1]=='#')
        {
            j=i+1;
            postemp=1;
        }
        
        if(vis[2][i]!=1 && s2[i]=='#')
        {
            j=i;
            postemp=2;
        }
 
        if(postemp > 0)
        {
            vis[postemp][j] = 1;
            num++;
            doit(j,postemp);
        }
    }
 
    else if(pos == 2)
    {
        if(vis[2][i+1]!=1 && s2[i+1]=='#')
        {
            j=i+1;
            postemp=2;
        }
        
        if(vis[1][i]!=1 && s1[i]=='#')
        {
            j=i;
            postemp=1;
        }
        if(postemp > 0)
        {
            vis[postemp][j] = 1;
            num++;
            doit(j,postemp);
        }
    }
}
 
 
int main() {
	int t,n,m,a,b,i,flag,tail,head;
 
	cin>>t;
	while(t--)
	{
	    cnt=0;num=0,num1=0;
	    memset(vis,0,sizeof(vis[0][0]) * 3 * 502);
	    int flag=0;
	    cin>>n;
	    s1[0]='.';s2[0]='.';
	    for(i=1;i<=n;i++)
	    {
	        cin>>s1[i];
	        if(s1[i] == '#')
                cnt++;
	    }
	    for(i=1;i<=n;i++)
	    {
	        cin>>s2[i];
	        if(s2[i] == '#')
                cnt++;
	    }
	    s1[n+1] = '.';
	    s2[n+1] = '.';
	    
        for(i=1;i<=n;i++)
        {
            if(s1[i] == '#')
            {
                num++;
                flag=1;
                vis[1][i] = 1;
                doit(i,1);
            }
            if(flag == 1)
                break;
        }
        num1 = num;
        flag=0;num=0;
        
        for(i=1;i<=n;i++)
        {
            memset(vis,0,sizeof(vis[0][0]) * 3 * 502);
            if(s2[i] == '#')
            {
                num++;
                vis[2][i] = 1;
                flag =1;
                doit(i,2);
            }
            if(flag == 1)
                break;
        }
        if(num == cnt || num1 == cnt)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
	}
 
	return 0;
}
