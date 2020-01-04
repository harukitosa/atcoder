#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if(a*b%2==0) {
        cout << "Even" << endl;
        return 0;
    } else {
        cout << "Odd" << endl;
        return 0;
    }
}