#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    long x, t;
    cin >> x >> t;
    if(x>t) {
        cout << x-t << endl;
    } else {
        cout << 0 << endl;
    }
}