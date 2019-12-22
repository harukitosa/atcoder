#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    string t;
    cin >> s;
    cin >> t;
    for(int i = 0;i < n;i++) {
        cout << s[i] << t[i];
    }
    cout << endl;
}