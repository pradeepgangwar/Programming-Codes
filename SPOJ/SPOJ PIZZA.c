#include <iostream>
using namespace std;

int main() {

	string a;
	int i,three=0,four=0,half=0,n,extra_pizza=0,total_pizza=0,four_fed=0;
	double b[10002];

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        b[i] = (double)(a[0]-48)/(double)(a[2]-48);
        if(b[i]==0.25)
            four++;
        else if(b[i]==0.5)
            half++;
        else
            three++;
    }

        if(half%2==0)
            {
                half = half/2;
                cout<<four_fed<<' '<<half<<endl;
            }

        else
        {
            four_fed = 2;
            half = half/2+1;
        }

        four_fed = three + four_fed;

        if(four>four_fed)
        {
            extra_pizza = ((four-four_fed)/4)+1;
        }

        total_pizza = extra_pizza + three + half;

        cout<<total_pizza+1<<endl;

	return 0;
}
