#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 10,b,c;
    b = a+1;
    c = a+2;
    vector <int> v;
    vector <int> :: iterator it;
    int ar[2000] = {0};

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(a+b);
    v.push_back(b+c);
    v.push_back(a+c);
    v.push_back(a+b+c);

    for (it=v.begin(); it<v.end(); it++) {
        for(int i=0;i<2000;i++) {
            int p = *it;
            if(i % p == 0) {
                ar[i] = 1;
            }
        }
    }
    for(int i=0;i<1000;i++) {
        if(ar[i] == 0) {
            cout<<i<<endl;
        }
    }
}
