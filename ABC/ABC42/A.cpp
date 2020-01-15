#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   int five = 0;
   int seven = 0;
   int a, b, c;
   cin >> a >> b >> c;
   if(a==5) {
       five++;
   } else if(a==7) {
       seven++;
   }
   if(b==5) {
       five++;
   } else if(b==7) {
       seven++;
   }
   if(c==5) {
       five++;
   } else if(c==7) {
       seven++;
   }
   if(five==2&&seven==1) {
       cout << "YES" << endl;
   } else {
       cout << "NO" << endl;
   }
}