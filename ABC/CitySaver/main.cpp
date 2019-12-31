#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    int a[n+1], b[n];
    cin >> n;
    for(int i = 0;i < n+1;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        cin >> b[i];
    }
    int count = 0;

    for(int i = 0;i < n;i++) {
        if(a[i]>=b[i]) {
            count+=b[i];
            a[i]-=b[i];
        } else {
            count+=a[i];
            b[i]-=a[i];
            a[i]=0;
            if(a[i+1]>=b[i]) {
                count+=b[i];
                a[i+1]-=b[i];
            } else {
                count+=a[i+1];
                a[i+1]=0;
            }
        }
    }
    cout << count << endl;
}