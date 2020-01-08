#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, T;
    vector<int> c;
    vector<int> t;
    cin >> n >> T;
    for(int i = 0;i < n;i++) {
        int x, y;
        cin >>x >> y;
        c.push_back(x);
        t.push_back(y);
    }
    int min = 10000;
    for(int i = 0;i < n;i++) {
        if(t[i]<=T) {
            if(min>c[i]) {
                min = c[i];
            }
        }
    }
    if(min!=10000) cout << min << endl;
    else cout << "TLE" << endl;
}