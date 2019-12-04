#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b;
  cin >> a;
  cin >> b;
  if(b == 1) {
    cout << 0 << '\n';
    return 0;
  }
  int result = 1;
  int count = 0;
  while(1) {
    result += a-1;
    count++;
    if(result >= b) break;
  }
  cout << count << '\n';
}


