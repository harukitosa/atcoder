#include<bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int d;
  cin >> d;
  if(d == 25) {
      cout << "Christmas" << endl;
  } else if(d == 24) {
      cout << "Christmas Eve"<< endl;
  } else if(d == 23) {
      cout << "Christmas Eve Eve" << endl;
  } else {
      cout << "Christmas Eve Eve Eve" << endl;
  }
}