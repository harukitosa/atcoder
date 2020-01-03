#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int s[m][n] = {};
    for(int i = 0;i < m;i++) {
        int  k;
        cin >> k;
        for(int j = 0;j < k;j++) {
            cin >> s[i][j];
        }
    }
    int p[m] = {};
    for(int i = 0;i < m;i++) {
        cin >> p[i];
    }
}