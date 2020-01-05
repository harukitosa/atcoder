#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string n;
    cin >> n;
    for(int i = 0;i < n.size();i++) {
        if(n[i] == '9') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}