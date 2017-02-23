#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[366];
    int n,i,j,m,large[366]={0},maxl[366]={0},total,maxtotal=0,res=0,check,start=1;

    cin>>n;
    for(i=0;i<n;i++)
        cin>>str[i];

    for(i=0;i<n;i++)
    {
        large[i]=0;maxl[i]=0;
        for(j=0;j<str[i].length();j++)
        {
            if(str[i][j]==67)
                large[i]++;

            else
            {
                if(large[i]>maxl[i])
                    maxl[i]=large[i];
                large[i]=0;
                continue;
            }
            if(large[i]>maxl[i])
                    maxl[i]=large[i];
        }
    }

    for(i=0;i<n;i++)
    	{
    		if(maxl[i]>res)
    			res=maxl[i];
    	}

    for(i=0;i<n-1;i++)
    {
        if(str[i][str[i].length()-1]==67)
        {
            if(str[i+1][0]==67)
            {
                if(check!=1&&start!=1)
                {
                    check=0;
                    for(j=0;j<str[i+1].length();j++)
                    {
                        if(str[i+1][j]==67)
                            {total++;}
                        else
                            {check=1;break;}
                    }
                    if(total>maxtotal)
                        maxtotal=total;
                }


                else{
                total=0;check=0;start=2;
                for(j=str[i].length()-1;j>=0;j--)
                    {
                        if(str[i][j]==67)
                            total++;
                        else
                            break;
                    }
                for(j=0;j<str[i+1].length();j++)
                    {
                        if(str[i+1][j]==67)
                            {total++;}
                        else
                            {check=1;break;}
                    }
                if(total>maxtotal)
                    maxtotal=total;
            }
        }
    }
    }
    if(maxtotal<=res)
    	maxtotal=res;

    cout<<res<<' '<<maxtotal;
    return 0;
}
