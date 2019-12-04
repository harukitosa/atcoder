#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, x;
    cin >> k;
    cin >> x;
    int i;
    for(i = -k+1;i <= k-1;i++) {
       cout <<  x + i;
       cout<< ' ';
    }
    cout << '\n';
}