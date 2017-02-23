#include <iostream>
using namespace std;

int main()
{
    long long int i,j,n,t,a[102][302]={0},m[102]={0},temp,mul,x;

    a[0][0]=1; m[0]=1;
    for(i=1;i<=100;i++)
    {
        for(j=0;j<=300;j++)
            a[i][j]=a[i-1][j];
        m[i]=m[i-1];

        temp=0; mul=i;
        for(j=0;j<m[i];j++)
        {
            x = a[i][j]*mul +temp;
            a[i][j] = x%10;
            temp = x/10;
        }
        while(temp!=0)
        {
            a[i][j] = temp%10;
            temp = temp/10;
            j++;
            m[i]++;
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=m[n]-1;i>=0;i--)
        {
            cout<<a[n][i];
        }
        cout<<endl;
    }
    return 0;
}
