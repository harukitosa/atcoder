#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, a, b;
  cin >> n;
  cin >> a;
  cin >> b;
  int train, taxi;
  if(n*a < b) {
    cout << n*a << "\n";
  } else {
    cout << b << "\n";
  }
  
}

