#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    if(b-a==c-b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}