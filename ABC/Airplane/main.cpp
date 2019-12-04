#include<bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int p, q, r;
  cin >> p >> q >> r;
  int mi;
  mi = min(p, q);
  int second;
  if(mi == p) {
      second = min(q, r);
  } else {
      second = min(p, r);
  }
  cout << mi + second << '\n';
}