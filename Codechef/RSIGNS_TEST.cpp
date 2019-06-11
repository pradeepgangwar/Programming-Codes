// https://www.codechef.com/JUNE19B/problems/RSIGNS
// Prints all the possible answers for this problem statement

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10] = {0};
    int total=0;
    for (int i=0; i<100000; i++) {
        int count = 0;
        int l = i;
        int r = 100000 - i - 1;
        int lor = l;
        int ror = r;
        if(l==0) {
            total++;
            cout<<l<<" "<<r<<endl;
        }
        if(r==0) {
            total++;
            cout<<l<<" "<<r<<endl;
        }
        while(l>0) {
            int d = l%10;
            a[d]++;
            if(a[d] == 1) {
                count++;
            }
            l = l/10;
        }
        while(r>0) {
            int d = r%10;
            a[d]++;
            if(a[d] == 1) {
                count++;
            }
            r = r/10;
        }
        if (count == 2) {
            total++;
            cout<<lor<<" "<<ror<<endl;
        }
        for (int i=0;i<10; i++) {
            a[i] = 0;
        }
    }
    cout<<"Total: "<<total<<endl;
}