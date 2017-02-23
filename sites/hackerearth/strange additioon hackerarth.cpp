#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i,j,c=0,d=0,p;
    char a[5002],b[5002];
    int r[5002];
    cin>>n;
    while(n--)
    {
        c=0;d=0;
        cin>>a>>b;

        i=0;
        while(a[i]!='\0')
        {
            c+=(a[i]-48)*pow(10,i);
            i++;
        }

        j=0;
        while(b[j]!='\0')
        {
            d+=(b[j]-48)*pow(10,j);
            j++;
        }

        p=c+d;

        for(i=0;p!=0;i++)
        {
            r[i]=p%10;
            p=p/10;
        }
        r[i]=-1;
        for(i=0;r[i]!=-1;i++){
    	if(r[i]!=0||i!=0)
            cout<<r[i];}

        cout<<endl;
    }
    return 0;
}
