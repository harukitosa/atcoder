#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> vc;
  int n;
  cin >> n;
  int i;
  for(i = 0;i < n;i++) {
    int x;
    cin >> x;
    vc.push_back(x);
  }
  double res;
  res = 0.0;
  for(i = 0;i < n;i++) {
    res += 1.0 / vc[i];
  }
  cout << 1/res << '\n';
 }
