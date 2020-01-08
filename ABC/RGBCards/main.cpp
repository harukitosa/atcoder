#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int r, g, b;
    cin >> r >> g >> b;
    int num = 100*r+10*g+b;
    if(num%4==0) {
        cout << "YES" << endl;
    } else {
        cout << "No" << endl;
    }
}