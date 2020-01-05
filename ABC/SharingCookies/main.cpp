#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if(a%3==0||b%3==0||(a+b)%3==0) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }
}
