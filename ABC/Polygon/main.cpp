#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int l[n];
    int max = -1;
    int sum = 0;
    for(int i = 0;i < n;i++) {
        cin >> l[i];
        sum+=l[i];
        if(l[i]>max) {
            max = l[i];
        }
    }
    if(max<sum-max) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}