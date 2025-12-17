// Question
// integer n and k given, array given.
// check if its possible to sort the array in non-decreasing order by reversing subarrays of max length of k
// print YES if its possible, else NO

// approach
// if arr already sorted, then print YES
// if arr unsorted, and if k = 1, print NO because when you reverse subarray of length 1, it will be the same
// if arr unsorted, and if k > 1, print YES
// when k > 1, its not necessary that sorting will only be possible with reversal of k length subarrays
// subarray length can be any number between 2 and k inclusive.

#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<long long> copy_arr = arr;
    sort(copy_arr.begin(), copy_arr.end());
    if(copy_arr == a || k > 1) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
