#include <bits/stdc++.h>
using namespace std;

int maxSpecialProduct(vector<int> A) {
    stack < pair<int,int> > s,s1;

    int left[100009], right[100009];

    for (int i=0;i<A.size(); i++) {
        cout<<i<<endl;
        pair <int, int> p;
        p = make_pair(A[i], i);
        if (s.empty()) {
            s.push(p);
            left[i] = 0;
        } else {
            while(true) {
                pair <int, int> p1;
                if (s.empty()) {
                    s.push(p);
                    left[i] = 0;
                    break;
                }
                p1 = s.top();
                if (p1.first <= p.first){
                    s.pop();
                    if (s.empty()) {
                        s.push(p);
                        left[i] = 0;
                        break;
                    }
                } else {
                    s.push(p);
                    left[i] = p1.second;
                    break;
                }
            }
        }
    }
    for (int i=A.size()-1; i >= 0; i--) {
        cout<<i<<endl;
        pair <int, int> p;
        p = make_pair(A[i], i);
        if (s1.empty()) {
            s1.push(p);
            right[i] = 0;
        } else {
            while(true) {
                cout<<"in loop"<<endl;
                pair <int, int> p1;
                if (s1.empty()) {
                    s1.push(p);
                    right[i] = 0;
                    break;
                }
                p1 = s1.top();
                if (p1.first <= p.first){
                    s1.pop();
                    if (s.empty()) {
                        s.push(p);
                        right[i] = 0;
                        break;
                    }
                } else {
                    s1.push(p);
                    right[i] = p1.second;
                    break;
                }
            }
        }
    }
    int max = INT_MIN;
    
    for (int i=0;i<A.size(); i++) {
        int pro = (left[i]*right[i])%1000000007;
        if (pro > max) {
            max = pro;
        }
    }
    return max;
}

int main() {
    vector <int> v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);
    v.push_back(5);
    v.push_back(5);
    v.push_back(8);
    int ans;
    ans = maxSpecialProduct(v);
    cout <<ans;
}