#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    int m = min(a+b, b+c);
    int res = min(m, c+a);
    cout << res << endl;
}