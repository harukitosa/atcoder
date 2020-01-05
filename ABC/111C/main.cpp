#include<bits/stdc++.h>
using namespace std;
int calc_max(vector<int> x) {
    int max = 1;
    int flag = x[0];
    int count = 0;
    for(int i = 1;i < x.size();i++) {
        if(flag==x[i]) {
            count++;
        } else {
            if(max<count) {
                max = count;
            }
            count = 0;
            flag = x[i];
        }
    }
    return count;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> v_f, v_b;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int x;
        cin >> x;
        if(i%2==0) {
            v_f.push_back(x);
        } else {
            v_b.push_back(x);
        }
    }
    sort(v_f.begin(), v_f.end());
    sort(v_b.begin(), v_b.end());
    cout << n-(v_f.size()-calc_max(v_f)+v_b.size()-calc_max(v_b)) << endl;
}