#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   long a, b;
   cin >> a >> b;
   if(b%a==0) {
       cout << b/a << endl;
   } else {
       cout << b/a+1 << endl;
   }
}