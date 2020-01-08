#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a[] = {0 , 1 , 3 , 1 , 2 , 1 , 2 , 1 , 1 , 2 , 1 , 2 , 1};
    // 配列の添字は 0 から始まるので，a [0] は 0 にしている．
    int x , y ; cin >> x >> y ;
    cout << ( a[x] == a[y] ? " Yes " : " No ") << endl ;
}