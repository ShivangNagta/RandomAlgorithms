#include<iostream>
#include<map>
using namespace std;

map<int, long long> memo;

long long fun(int n, map<int, long long>& memo){
    if (memo.find(n) != memo.end()) return memo[n];
    if (n <= 2) return 1;
    memo[n] = fun(n-1, memo) + fun(n-2, memo);
    return memo[n];
}

int main(){
    int n = 100;
    cout << fun(n, memo) << endl;
    return 0;
}
