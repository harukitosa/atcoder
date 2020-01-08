#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    vector<string> w;
    cin >> n;
    for(int i = 0;i< n;i++) {
        string x;
        cin >> x;
        w.push_back(x);
    }
    for(int i = 0;i < n-1;i++) {
        if(w[i][w[i].size()-1] == w[i+1][0]) {

        } else {
            cout << "No" << endl;
            return 0;
        }
    }   

    sort(w.begin(), w.end());
    for(int i = 0;i < n-1;i++) {
        if(w[i]==w[i+1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}