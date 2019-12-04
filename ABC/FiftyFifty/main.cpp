#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i;
    for(i=0;i<s.length();i++) {
        if(count(s.begin(), s.end(), s[i]) != 2) {
            cout << "No" <<"\n";
            return 0;
        }
    }
    cout << "Yes" << '\n';
}