#include<bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  int num;
  num = b / a;
  if(num > c) {
      cout << c <<'\n';
  } else {
      cout << num << '\n';
  }
}