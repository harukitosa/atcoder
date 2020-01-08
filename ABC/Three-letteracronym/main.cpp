#include<bits/stdc++.h>
using namespace std;
char ToUpper (char cX) { return toupper(cX); } 
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string a, b, c;
    cin >> a >> b >> c;
    transform(a.begin(), a.end(), a.begin(), ToUpper);
    transform(b.begin(), b.end(), b.begin(), ToUpper);
    transform(c.begin(), c.end(), c.begin(), ToUpper);
    cout << a[0] << b[0] << c[0] << endl;
}