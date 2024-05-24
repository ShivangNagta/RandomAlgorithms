#include <bits/stdc++.h>
using namespace std;

int maxDiff (int arr[], int n)
{
  int maxi = arr[n-1], ans = 0;
  for (int i = n-2; i>=0; i--)
  {
    ans = max(ans, maxi - arr[i]);
    maxi = max(maxi, arr[i]);
  }
  return ans;
}

int main()
{
int arr[] = {80, 2, 6, 3, 100};
int n = sizeof(arr) / sizeof(arr[0]);

cout << "Maximum difference is " << maxDiff(arr, n);
return 0;
}
