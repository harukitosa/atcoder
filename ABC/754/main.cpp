#include<bits/stdc++.h>
using namespace std;

int charToint(char s) {
    return s - '0';
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string str;
    int ans = 10000;
    cin >> str;
    for(int i = 0;i < str.size()-2;i++) {
        int num = (charToint(str[i])*100+charToint(str[i+1])*10+charToint(str[i+2]));
        ans = min(ans, abs(num-753));
    }

    cout << ans << endl;
}