#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int i,t,h;
    float am,ah,m;
    char a[6];

    cin>>t;
    while(t--)
    {
        cin>>a;
        h=(a[0]-48)*10+(a[1]-48);
        m=(a[3]-48)*10+(a[4]-48)*1;
        h=h%12;
        am=(float)(m*(6));
        ah=(float)(h*(30))+(float)(m*((float)1/(float)2));
       
        if(am>=ah&&am-ah<=180)
            printf("%.1f\n",(float)(am-ah));
        else if(am>=ah&&am-ah>=180)
            printf("%.1f\n",(float)(360-(float)(am-ah)));
        else if(am<ah&&ah-am>=180)
            printf("%.1f\n",(float)(360-(float)(ah-am)));
        else
            printf("%.1f\n",(float)(ah-am));

    }
}

