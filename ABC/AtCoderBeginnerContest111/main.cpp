#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 1;i <= 9;i++) {
        if((i-1)*111<n && n<=i*111) {
            cout << i*111 << endl;
            return 0;           
        }
    }
}