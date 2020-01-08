#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int w, h, n;
    cin >> w >> h >> n;
    vector<int>x, y, a;
    for(int i = 0;i < n;i++) {
        int k, j, f;
        cin >> k >> j >> f;
        x.push_back(k);
        y.push_back(j);
        a.push_back(f);
    }
    int min_x = 0;
    int min_y = 0;
    int max_x = w;
    int max_y = h;
    for(int i = 0;i < n;i++) {
        switch (a[i])
        {
        case 1:
            min_x = max(min_x, x[i]);
            break;
        case 2:
            max_x = min(max_x, x[i]);
            break;
        case 3:
            min_y = max(min_y, y[i]);
            break;
        case 4:
            max_y = min(max_y, y[i]);
            break;
        }
    }
    if(max_x<min_x) {
        cout << 0 << endl;
        return 0;
    } else if(max_y<min_y) {
        cout << 0 << endl;
        return 0;
    }
    int rect = (max_x-min_x)*(max_y-min_y);
    if(rect < 0) {
        rect = 0;
    }
    cout << rect << endl;
}