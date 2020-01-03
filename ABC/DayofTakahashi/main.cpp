#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if(a<=b) {
        cout << a << endl;
    } else {
        cout << a-1 << endl;
    }
    return 0;
}