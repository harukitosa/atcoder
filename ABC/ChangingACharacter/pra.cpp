#include<bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  char in[55];
  int a, b;
  scanf("%d%d", &a,&b);
  scanf("%s", in);
  in[b-1]+=32;
  printf("s\n", in);
}