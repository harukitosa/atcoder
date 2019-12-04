#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    double res;
    int i = 0;
    for(i = 1;i <= n;i++) {
       res = i * 1.08;
       if(int(res) == n) {
           cout << i << '\n';
           return 0;
       }
    }
    cout << ":(" << '\n';
}
