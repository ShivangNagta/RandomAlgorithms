#include<bits/stdc++.h>
using namespace std;

map<int, bool> memo;

bool CanSumMemo(int targetSum, const vector<int>& numbers, map<int, bool>& memo )
{
    if (memo.find(targetSum) != memo.end()) return memo[targetSum];
    if (targetSum == 0) return true;
    if (targetSum < 0 ) return false;

    for (int num : numbers)
    {
        int remainder = targetSum - num;
        if (CanSumMemo(remainder, numbers, memo))
        {
            memo[remainder] = true;
            return true;
        }
    }

    memo[targetSum] = false;
    return false;
    
}

int main() {
    cout << boolalpha;
    vector<int>a(2);
    a[0] =7;
    a[1] =14;
    cout << CanSumMemo(300, a, memo ) << endl;
    return 0;
}