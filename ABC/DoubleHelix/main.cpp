#include<bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string b;
  cin >> b;
  if(b[0] == 'A') {
      cout << "T" << '\n';
  } else if(b[0] == 'T') {
      cout << "A" << '\n';
  } else if(b[0] == 'C') {
      cout << "G" << '\n';
  } else {
      cout << "C" << '\n';
  }
}