#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a;
  cin >> b;
  if((a+b) % 2 == 1) {
    cout << "IMPOSSIBLE" << '\n';
  }
  else {
    cout << (a+b)/2 << '\n';
  }
}
