#include <bits/stdc++.h>
using namespace std;

int calcNumOfCombination(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}
//nの階乗を計算
int factorial(int n){
    int answer = 1;
    while(n > 1){
	    answer *= n;
	    n--;
	}
    return answer;
}

int main() {
    int n;
    cin >> n;
    int s;
    cin >> s;
}