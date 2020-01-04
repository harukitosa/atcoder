#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string n;
    cin >> n;
    int count = 1;
    char store;
    for(int i = 0;i < 4;i++) {
        if(n[i] == store) {
            count++;
            if(count>=3) {
                cout << "Yes" << endl;
                return 0;
            }
        } else {
            count = 1;
            store = n[i];
        }
    }

    if(count>=3) {
        cout << "Yes" << endl;
        return 0;
    }else {
        cout << "No" << endl;
    }
}