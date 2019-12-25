#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int r, d, x;
    cin >> r >> d >> x;
    for(int i = 1;i <= 10;i++) {
        cout << r*x-d << endl;
        x = r*x-d;
    }
    return 0;
}