#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   int a, b;
   cin >> a >> b;
   cout << min(b-1, a-b) << endl;
   return 0;
}