#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int value = 700;
    for(int i = 0;i < 3;i++) {
        if(s[i] == 'o') {
            value+=100;
        }
    }
    cout << value << endl;
}