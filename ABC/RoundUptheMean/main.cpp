#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if((a%2==0&&b%2==0)||(a%2==1&&b%2==1)) {
        cout << (a+b)/2 << endl;
        return 0;
    } else {
        cout << (a+b)/2+1 << endl;
        return 0;
    }
}