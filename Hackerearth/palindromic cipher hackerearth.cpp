#include<iostream>
#include<string.h>
using namespace std;

int palin(char a[][11],int n,int b)
{
    int i,e=0;
    //cout<<a[0]<<endl<<n<<endl<<b<<endl;
    for(i=0;i<n/2;i++)
    {
        if(a[b][i]==a[b][n-1-i])
            e=1;
        else
            return 0;
    }
    return e;

}

int main()
{
    long long int n,d=1,i,j,c;
    char a[103][11];
    char q[12]={'P','a','l','l','i','n','d','r','o','m','e'};
    cin>>n;

    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
        c=palin(a,strlen(a[i]),i);
        if(c==0)
        {
            for(j=0;a[i][j]!='\0';j++)
                d=(d*(a[i][j]-96));
           cout<<d<<endl;
            d=1;
        }
        else if(c==1)
            cout<<q<<endl;
    }
    return 0;
}
