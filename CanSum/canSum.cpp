#include<bits/stdc++.h>
using namespace std;

bool CanSum(int targetSum, const vector<int>& numbers) {
    if (targetSum == 0) return true;
    if (targetSum < 0) return false;

    for (int num : numbers) {
        int remainder = targetSum - num;
        if (CanSum(remainder, numbers)) {
            return true;
        }
    }
    return false;
}

int main() {
    cout << boolalpha;
    cout << CanSum(7, {5, 3, 4, 7}) << endl;
    cout << CanSum(7, {2}) << endl;
    cout << CanSum(300, {7, 14}) << endl;
    return 0;
}
