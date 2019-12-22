#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    for(int i = 1;i <= 3;i++) {
        if(a != i && b != i) {
            cout << i << endl;
        }
    }
}