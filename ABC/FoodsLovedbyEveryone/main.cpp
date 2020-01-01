#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            a[i][j] = 0;
        }
    }
    for(int i = 0;i < n;i++) {
        int k;
        cin >> k;
        for(int j = 0;j < k;j++) {
            int num;
            cin>>num;
            a[i][num-1] = 1;
        }
    }

    int count = 0;
    for(int i = 0;i < m;i++) {
        int flag = 0;
        for(int j = 0;j < n;j++) {
            if(a[j][i] != 1) {
                flag = 1;
            }
        }
        if(flag==0) {
            count++;
        }
    }

    cout << count << endl;
}