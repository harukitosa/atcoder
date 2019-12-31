#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, k;
    cin >> a >> b >> k;
    int min_num = min(a, b);
    int i = min_num;
    int count = 0;
    while(i>0) {
        if(a%i==0&&b%i==0) {
            count++;
            if(count == k) {
                cout << i << endl;
                return 0;
            }
        }
        i--;
    }
}