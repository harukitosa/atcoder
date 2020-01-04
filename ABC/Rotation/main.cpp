#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string u, d;
    cin >> u >> d;
    for(int i = 0;i < 3;i++) {
        if(u[i]!=d[2-i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}