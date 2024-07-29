#include <iostream>
#include <vector>

using namespace std;

// BIT
vector<int> BIT(vector<int> &arr){
    vector<int> ans;
    for (int i=0; i < arr.size(); ++i){
        int res = i - (i & -i) + 1;
        int sum = 0;
        for (int j = res; j <= i; ++j){
            sum+= arr[j];
        }
        ans.push_back(sum);
    }
    return ans;
}

// Sum
int Sum(const vector<int> &bit, int idx){
    int sum = 0;
    while (idx > 0){
        sum += bit[idx];
        idx -= idx & -idx;
    }
    return sum;
}

// Update
void Update(vector<int> &bit, int idx, int value){
    int n = bit.size();
    while (idx <= n){
        bit[idx] += value;
        idx += idx & -idx;
    }
}


int main(){
    vector<int> arr = {0, 1, 0, 2, 1, 1, 3, 0, 4, 2, 5};
    vector<int> bit = BIT(arr);

    for (auto i : bit){
        cout << i << " ";
    }
    cout << endl;

    Update(bit, 3, 4);

    for (auto i : bit){
        cout << i << " ";
    }
}