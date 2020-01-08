#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if(a+b>=10) {
        cout << "error" << endl;
    } else {
        cout << a+b << endl;
    }
}