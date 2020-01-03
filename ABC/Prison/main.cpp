#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int l[m] = {};
    int r[m] = {};
    for(int i = 0;i < m;i++) {
        cin >> l[i] >> r[i];
    }
    int flag = false;
    int count = 0;
    for(int i = 1;i <= n;i++) {
        for(int j = 0;j < m;j++) {
            if(l[j]<=i && r[j]>=i) {

            } else {
                flag = true;
            }
        }
        if(!flag) {
            count++;
        }
        flag = false;
    }
    cout << count << endl;
    return 0;
}