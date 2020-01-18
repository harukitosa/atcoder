#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   long a, b, c;
   cin >> a >> b >> c;
   if(b>a) {
       cout << c/a + (c%a)/b << endl; 
   } else {
       cout << c/b + (c%b)/a << endl;
   }
}