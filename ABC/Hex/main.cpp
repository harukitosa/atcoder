#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    char x, y;
    cin >> x >> y;
    if(x>y) {
        cout << ">" << endl;
    } else if(x==y) {
        cout << "=" << endl;
    } else {
        cout << "<" << endl;
    }
}