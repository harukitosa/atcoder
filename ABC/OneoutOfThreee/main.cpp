#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b) {
        cout << c << endl;
    } else if(b==c) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }
    return 0;
}