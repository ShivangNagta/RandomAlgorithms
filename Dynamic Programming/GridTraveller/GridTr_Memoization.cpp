#include<iostream>
#include<map>
#include<string>
using namespace std;

map<string, long long> memo;

long long GRM(int n, int m, map<string, long long>& memo) {
    string key = to_string(n) + "-" + to_string(m);
    
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }
    
    if (n == 1 && m == 1) {
        return 1;
    }
    
    if (n == 0 || m == 0) {
        return 0;
    }
    
    memo[key] = GRM(n - 1, m, memo) + GRM(n, m - 1, memo);
    return memo[key];
}

int main() {
    cout << GRM(2, 3, memo) << endl;
    return 0;
}
