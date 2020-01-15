#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   int n, k, m;
   cin >> n >> k >> m;
   int a[n-1];
   int sum = 0;
   for(int i = 0;i < n-1;i++) {
      cin >> a[i];
      sum += a[i];
   }
   int ans = n*m-sum;
   if(ans<0) {
     cout << 0<< endl;
   }else {
      if(ans>k) {
         cout << -1 << endl;
      } else {
         cout << ans << endl;
      }
   }
   return 0;
}