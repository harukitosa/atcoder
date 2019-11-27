#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  vector<int> vc;
  cin >> n;
  int store;
  store = n;
  while(n--) {
    int x;
    cin >> x;
    vc.push_back(x);
  }
  int result;
  int i, j;
  result = 0;
  for(i = 0;i < store-1;i++) {
    for(j = i+1;j < store;j++) {
      result+=vc[i]*vc[j];
    }
  }
  cout << result << '\n';
}



