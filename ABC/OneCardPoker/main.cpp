#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if(a==1) {
        if(b==1) cout << "Draw" << endl;
        else cout << "Alice" << endl;
        return 0;
    }
    if(b==1) {
        if(a==1) cout << "Draw" << endl;
        else cout << "Bob" << endl;
        return 0;
    }
    if(a>b) {
        cout << "Alice" << endl;
    } else if(a==b) {
        cout << "Draw" << endl;
    } else {
        cout << "Bob" << endl;
    }
}