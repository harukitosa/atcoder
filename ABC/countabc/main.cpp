#include<bits/stdc++.h>
using namespace std;
int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   string s;
   int n;
   cin >> n;
   cin >> s;
   int count = 0;
   for(int i = 0;i < s.size()-2;i++) {
       if(s[i]=='A') {
           if(s[i+1] == 'B') {
               if(s[i+2] == 'C') {
                   count++;
               }
           }
       }
   }
   cout << count << endl;
}