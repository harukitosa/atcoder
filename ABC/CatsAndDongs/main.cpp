#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, x;
    cin >>  a >> b >> x;
    if(x<=a+b&&x>=a){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 }