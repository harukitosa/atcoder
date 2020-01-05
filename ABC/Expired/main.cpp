#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int x, a, b;
    cin >> x >> a >> b;
    if(a>=b) {
        cout << "delicious" << endl;
    } else if(a+x>=b) {
        cout << "safe" << endl;
    } else {
        cout << "dangerous" << endl;
    }
}