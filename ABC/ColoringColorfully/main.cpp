#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int count_0 = 0;
    for(int i = 0;i<s.length();i++){
        if(i%2==0) {
            if(s[i]=='0') {
                count_0++;
            } 
        } else {
            if(s[i]=='1') {
                count_0++;
            }
        }
    }

    int count_1 = 0;
    for(int i = 0;i<s.length();i++){
        if(i%2==0) {
            if(s[i]=='1') {
                count_1++;
            } 
        } else {
            if(s[i]=='0') {
                count_1++;
            }
        }
    }

    int m;
    m = max(count_0, count_1);
    cout << s.length() -m << endl;
}