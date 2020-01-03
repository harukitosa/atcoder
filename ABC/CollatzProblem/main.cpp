#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int s;
    cin >> s;
    vector<int> a;
    a.push_back(s);
    int store = s;
    while(1) {
        if(store%2==0) {
            a.push_back(store/2);
            store /= 2;
        } else {
            a.push_back(3*store+1);
            store = 3 * store + 1;
        }

        for(int i = 0;i < a.size()-1;i++) {
            if(a[i]==store) {
                cout << a.size() << endl;
                return 0;
            }
        }
    }
}