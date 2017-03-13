#include <iostream>
using namespace std;

int main() {

    long long int n,a[22],ans,t,i,k,j;
    for(i=0;i<22;i++)
        a[i]=1;
    for(i=1;i<21;i++)
    {
        for(j=i;j>0;j--)
            a[i]=a[i]*j;
    }

    cin>>t;
    while(t--){
        cin>>n;
        ans=0;
        k=0;
        for(i=n+1;i>=k;i--)
        {
            ans += a[i]/(a[k]*a[i-k]);
            k++;
        }
        cout<<ans<<endl;
    }

	return 0;
}

