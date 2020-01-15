#include<bits/stdc++.h>
using namespace std;

bool pairCompare(pair<int, string> a, pair<int, string> b) {
        return a.first < b.first;

}

int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   long n, m;
   cin >> n >> m;
   vector<pair<long, string>> x(m);
   for(int i = 0;i < m;i++) {
      long a;
      string b;
      cin >> a >> b;
      x[i] = make_pair(a, b);
   }
   stable_sort(x.begin(), x.end(), pairCompare);
   // cout << "--------" << endl;
   // for(int i = 0;i < m;i++) {
   //    cout << x[i].first << " " << x[i].second <<endl;
   // }
   long ac_count = 0;
   long wa_count = 0;
   long flag_num = 0;
   long flag_ac = 0;
   long store_wa = 0;
   for(int i = 0;i < m;i++) {
      if(flag_num==x[i].first) {
         if(flag_ac==1) {

         } else {
            if(x[i].second=="AC") {
               ac_count++;
               flag_ac=1;
               wa_count += store_wa;
               store_wa = 0;
            } else {
               store_wa++;
            }
         }
      } else {
         flag_num = x[i].first;
         flag_ac = 0;
         store_wa = 0;
         i--;
      }
   }
   cout << ac_count << " " << wa_count << endl;
}