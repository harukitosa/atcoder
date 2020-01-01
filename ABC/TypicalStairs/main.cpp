#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long int n, m;
    cin >> n >> m;
    long long int a[n];
    for(int i = 0;i < n;i++) {
        a[i] = 0;
    }
    for(int i = 0;i < m;i++) {
        int x;
        cin >> x;
        a[x-1] = 1;
    }

    long long int dp[n+1];
    dp[0] = 1;
    if(a[0]!=1) {
        dp[1] = 1;
    } else {
        dp[1] = 0;
    }

    for(int i = 2;i <= n;i++) {
        if(a[i-1]==0) { 
            dp[i] = dp[i-1] + dp[i-2];
            dp[i]%=1000000007;
        } else {
            dp[i] = 0;
        }
    }
    cout << dp[n]%1000000007 << "\n";
    return 0;
}