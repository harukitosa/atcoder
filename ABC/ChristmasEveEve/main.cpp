#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> p;
    for(int i = 0;i < n;i++) {
        int x;
        cin >> x;
        p.push_back(x);
    }
    sort(p.rbegin(), p.rend());
    p[0]/=2;
    cout << accumulate(p.begin(), p.end(), 0) << endl;
}