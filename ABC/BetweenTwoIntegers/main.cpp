#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    if(c>=a&&c<=b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}