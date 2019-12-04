#include<bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  int result = 0;
  result = max(a, b);
  if(result == a) {
      result += max(a-1, b);
  } else {
      result += max(a, b-1);
  }
  cout << result << '\n';
}