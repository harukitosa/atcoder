#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> a;
  int i;
  i = 0;
  for(i = 0;i < n;i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  vector<int> b;
  for(i = 0;i < n;i++) {
    int x;
    cin >> x;
    b.push_back(x);
  }
  vector<int> c;
  for(i = 0;i < n-1;i++) {
    int x;
    cin >> x;
    c.push_back(x);
  }
  int stock;
  int result;
  stock = -1;
  result = 0;
  for(i = 0;i < n;i++) {
    result += b[a[i]-1];
    if(a[i] - stock == 1) {
      result += c[stock-1];
    }
    stock = a[i];
  }

  cout << result << '\n';
}

