#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t,res,l;
	char s[100];
	cin>>t;
	while(t--)
	{
		cin>>s;
		l=strlen(s);
		res=(s[0]-48)+(s[l-1]-48);
		cout<<res<<endl;
	}
	return 0;
}
