#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   long long n, k, x, y;
   cin >> n >> k >> x >> y;
   if(k>n) {
       cout << n*x << endl;
   } else {
       cout << k*x+(n-k)*y << endl;
   }
}