#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   char c;
   cin >> c;
   if(c=='a'||c=='i'||c=='u'||c=='e'||c=='o') {
       cout << "vowel" << endl;
   } else {
       cout << "consonant" << endl;
   }
   return 0;
}