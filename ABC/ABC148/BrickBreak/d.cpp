#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0;i < n;i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int count = 1;
    for(int i = 0;i < n;i++) {
        if(vec[i] == count) count++;
    }
    if(count == 1) cout << -1 << endl;
    else cout << n-count+1 << endl;
}