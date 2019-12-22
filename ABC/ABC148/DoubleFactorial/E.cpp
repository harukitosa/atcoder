#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    cin >> n;
    long long now, back, backback;
    if(n == 0 || n == 1) {
        cout << 0 << endl;
        return 0;
    }

    now = 1;
    long long count = 0;
    long long result = 0;
    if(n%2==0) {
        count = n/5/2;
        result = count;
        while(count > 0) {
            count = count/5;
            result+=count;
        }
    } else {
        cout << 0 << endl;
        return 0; 
    }


    cout << result << endl;
}
