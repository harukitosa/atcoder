#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int x, a, b;
    cin >> x >> a >> b;
    if(abs(x-a)>abs(x-b)) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }
}