#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   int a, b, c;
   cin >> a >> b >> c;
   if(a==b&&b==c) {
       cout << 1 << endl;
       return 0;
   } else if(a==b||b==c||c==a) {
       cout << 2 << endl;
   } else {
       cout << 3 << endl;
   }
}