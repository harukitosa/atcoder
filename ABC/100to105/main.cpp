#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    if(x >= 2000) {
        cout << 1 << '\n';
        return 0;
    } 
    int mod, res;
    mod = x /100;
    res = mod  * 100;
    if(res <= x && res+mod*5 >= x) {
        cout << 1 << '\n';
        return 0;
    } else {
        cout << 0 << '\n';
        return 0;
    }
}