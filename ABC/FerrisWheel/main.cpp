#include<bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  if(a >= 13) {
      cout << b << '\n';
  } else if(a >= 6 && a <= 12) {
      cout << b/2 << '\n';
  } else {
      cout << 0 << '\n';
  }
}