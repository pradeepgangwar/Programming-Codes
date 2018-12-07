#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int t,count;
    
    cin>>t;
    while(t--) {
        count = 0;
        cin>>s;
        while(s.length() != 0) {
            char c = s.at(0);
            s.erase(remove(s.begin(), s.end(), c), s.end());
            count++;
        }
        if (count%2 == 0) {
            cout<<"Player2"<<endl;
        } else {
            cout<<"Player1"<<endl;
        }
    }
}