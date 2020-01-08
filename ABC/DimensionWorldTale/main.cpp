#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m, X, Y;
    cin >> n >> m >> X >> Y;
    vector<int> x, y;
    for(int i = 0;i < n;i++) {
        int z;
        cin >> z;
        x.push_back(z);
    }
    for(int i = 0;i < m;i++) {
        int h;
        cin >> h;
        y.push_back(h);
    }

    for(int i = X+1;i <= Y;i++) {
        int flag = true;
        for(int j = 0;j < n;j++) {
            if(x[j]>=i) {
                flag = false;
            }
        }
        for(int j = 0;j < m;j++) {
            if(y[j]<i) {
                flag = false;
            }
        }
        if(flag) {
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
}