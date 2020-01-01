#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin>>n;
    double a[n];
    vector<string> str;
    for(int i = 0;i < n;i++) {
        string x;
        cin >> a[i] >> x;
        str.push_back(x);
    }
    double result = 0.0;
    for(int i = 0;i < n;i++) {
        if(str[i] == "JPY") {
            result+=a[i];
        } else {
            result+=a[i]*380000;
        }
    }
    cout << fixed<< setprecision(10)<<result << endl;
}