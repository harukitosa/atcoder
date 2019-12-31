#include<bits/stdc++.h>
using namespace std;
int MAX;
int search_max(vector<int> a) {
    int max_num = a[0];
    int flag = 0;
    for(int i = 0;i < a.size();i++) {
        if(max_num<a[i]) {
            max_num = a[i];
            flag = i;
        }
    }
    MAX = max_num;
    return flag;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int flag = search_max(a);
    for(int i = 0;i < n;i++) {
        if(flag!=i) {
            cout << MAX << endl;
        } else {
            int max_num = -1;
            for(int i = 0;i < a.size();i++) {
                if(i!=flag) {
                    if(max_num<a[i]) {
                        max_num = a[i];
                    }
                }
            }
            cout << max_num << endl;
        }
    }
}