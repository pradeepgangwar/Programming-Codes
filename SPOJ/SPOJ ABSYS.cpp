#include <iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
using namespace std;
 
int has(char x[]){
    int i;
    for(i=0;x[i]!='\0';i++){
        if(x[i]==109)
            {return 1;break;}
    }
    return 0;
}
 
int main() {
 
	int n,i,j,l,k,x,y;
	char a[20],b[20],c[20],d[20],e[20];
 
	cin>>n;
	while(n--)
    {
        j=0;i=0;k=0;
        cin>>a>>b>>c>>d>>e;
        i = has(a);
        j = has(c);
        k = has(e);
 
        if(j==1)
        {
            x = atoi(a);
            y = atoi(e);
            cout<<x<<" + "<<y-x<<" = "<<y<<endl;
        }
 
        else if(i==1)
        {
            x = atoi(c);
            y = atoi(e);
            cout<<y-x<<" + "<<x<<" = "<<y<<endl;
        }
 
        else if(k==1)
        {
            x = atoi(a);
            y = atoi(c);
            cout<<x<<" + "<<y<<" = "<<x+y<<endl;
        }
 
    }
 
	return 0;
}
