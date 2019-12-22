#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a, b, r, tmp, x;
    cin >> a >> b;

    x = a*b;
    if(a<b){
      tmp = a;
      a = b;
      b = tmp;
    }
 


    r = a % b;
    while(r!=0){
      a = b;
      b = r;
      r = a % b;
    }

    cout << x/b << endl;
    return 0;
    
}