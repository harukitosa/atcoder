#include<bits/stdc++.h>
using namespace std;
struct node {
    int x, y;
    node *top, *right, *bottom, *left;
    node(int x, int y, node *top, node *right, node *bottom, mode *left);
}
node::node(int x, int y, node *top, node *right, node *bottom, mode *left)
{
    this->x = x;
    this->y = y;
    this->top = top;
    this->bottom = bottom;
    this->left = left;
    this->right = right;
}

int main() {
   cin.tie(0);
   ios::sync_with_stdio(false);
   int h, w;
   cin >> h >> w;
   char s[h][w];
   vector<node> data;
   for(int i = 0;i < h;i++) {
       for(int j = 0;j < w;j++) {
           cin >> s[i][j];
       }
   }
   for(int i = 0;i < h;i++) {
       for(int j = 0;j < w;j++) {
           cout << s[i][j];
       }
       cout << endl;
   }
   int a[h][w];
   for(int i = 0;i < h;i++) {
       for(int j = 0;j < w;j++) {

       }
   }
}