#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> vc;
    for(int i = 0;i < n;i++) {
        int x;
        cin >> x;
        vc.push_back(x);
    }
    int count = 0;
    int num = 0;
    int i = 0;
    while(num<=x && i<n) {
        count++;
        num+=vc[i];
        i++;
    }
    cout << count << endl;
    
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}