#include<bits/stdc++.h>
using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, k;
  string s;
  cin >> n >> k >> s;
  string ans;
  for(int i = 0;i < n;i++) {
      if(i == k-1) {
          ans += tolower(s[i]);
      } else {
          ans+= s[i];
      }
  }
  cout << ans << '\n';
}