#include <iostream>
using namespace std;

int main() {

    int n,i,ans=0,a[30]={0};
    string s;

    cin>>n;
    while(n--)
    {
        ans=0;
        for(i=0;i<26;i++)
            a[i]=0;
        cin>>s;
        ans=0;
        for(i=0;i<s.length();)
        {
            if(s[i+1]!=s[i])
                {i++;}
            else
                {while(s[i+1]==s[i]&&i<s.length())
                                i++;
                    i++;
                }
            ans++;

        }
        cout<<ans<<endl;

       /* for(i=0;i<26;i++)
        {
            if(a[i]!=0)
                ans++;
        }*/
        if(ans%2==0)
            cout<<"Motu"<<endl;
        else
            cout<<"Chotu"<<endl;
    }

	return 0;
}
