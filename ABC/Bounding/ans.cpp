#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, x; cin >> n >> x;
    vector<int> D(n+1);
    D[0] = 0;
    for(int i = 0;i < n;i++) {
        int x; cin >> x;
        D[i+1] = D[i] + x;
    }
    int ans = 0;
    for(int i = 0;i <= n;i++) {
        if(D[i] <= x) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}