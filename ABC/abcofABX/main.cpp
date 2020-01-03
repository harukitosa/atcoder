#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 0;i < 3;i++) {
        if(s[i]=='a') {
            a++;
        } else if(s[i] == 'b') {
            b++;
        } else {
            c++;
        }
    }

    if(a!=1 || b != 1 || c != 1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}