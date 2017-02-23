#include<iostream>
#include<string.h>
using namespace std;

int count_one (int n)
    {
        int count=0;
        while(n)
        {
            n = n & (n-1);
            count++;
        }
        return count;
    }

int main()
{
	int t,s,l,a,res;
	cin>>t;
	while(t--)
	{
		cin>>a;
		if(a>2048)
        {
            l=a/2048;
            s=a%2048;
            res=l+count_one(s);
            cout<<res<<endl;
        }
        else
        {
            cout<<count_one(a)<<endl;
        }
	}
	return 0;
}
