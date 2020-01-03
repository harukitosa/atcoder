#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;
    if(a>b) {
        count+=b;
    } else {
        count+=a;
    }

    if(c>d) {
        count+=d;
    } else {
        count+=c;
    }
    cout << count << endl;
}