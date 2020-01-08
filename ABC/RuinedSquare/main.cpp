#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int x_1, x_2, y_1, y_2;
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    int x = x_2-x_1;
    int y = y_2-y_1;
    cout << x_2-y << " " << y_2-x << endl;
}