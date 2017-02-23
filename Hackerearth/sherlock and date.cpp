#include <iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	int n,i;
    cin>>n;
    cin.ignore();
    while(n--)
    {
    	getline(cin,s);
    	if(s[0]==48)
        {
            if(s[2]=='J')
            {
                if(s[13]==48)
                {
                    s[13]=57;
                    if(s[12]==48)
                    {
                        s[12]=57;
                        s[11]=s[11]-1;
                    }
                    else
                        s[12]=s[12]-1;
                }
                else
                    s[13]=s[13]-1;

                s.replace(0,8,"31 December");
            }

            else if(s[2]=='F')
                s.replace(0,9,"31 January");

            else if(s[2]=='M'&&s[4]=='r')
                s.replace(0,6,"28 February");

            else if(s[2]=='A'&&s[3]=='p')
                s.replace(0,6,"31 March");

            else if(s[2]=='M')
                s.replace(0,4,"31 April");

            else if(s[2]=='J'&&s[4]=='n')
                s.replace(0,5,"31 May");

            else if(s[2]=='J')
                s.replace(0,5,"31 June");

            else if(s[2]=='A')
                s.replace(0,7,"31 July");

            else if(s[2]=='S')
                s.replace(0,10,"31 August");

            else if(s[2]=='O')
                s.replace(0,8,"31 September");

            else if(s[2]=='N')
                s.replace(0,9,"31 October");

            else if(s[2]=='D')
                s.replace(0,9,"31 November");

        }

    	else if(s[1]!=' ')
    		{
    			if(s[1]==48)
    				{s[1]=57;s[0]=s[0]-1;}
    			else
    				s[1]=s[1]-1;
    		}

    	else
    		{
    			if(s[0]==48)
    				s[0]=57;
    			else
    				s[0]=s[0]-1;
    		}
        if(s[0]==48)
            s.erase(0,1);
    	cout<<s<<endl;
    }
    return 0;
}
