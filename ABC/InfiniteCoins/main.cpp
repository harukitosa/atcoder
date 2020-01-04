#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, a;
    cin >> n >> a;
    if(a>=499) {
        cout << "Yes" << endl;
        return 0;
    }
    if(n%500<=a) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}