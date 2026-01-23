// Question
// n, arr[], k given

// arr is balanced if for every i
// abs(b[i] - b[i + 1]) <= k

// operation:
// remove one element
// re-arrange elements in any order
// such that arrangment is balanced

// Minimum number of elements to remove

// whats the 1 order of array where diff b/w
// consecutive elements is as low as possible
// SORTED Order

// find length of largest subarray where for all 
// consecutive pairs difference is <= k

// answer is (N - L)

input n, arr[], k;
sort(arr);
count = 1, ans = 1;
for(i = 1 to n) {
  if arr[i] - arr[i + 1] <= k, count++;
  else count = 1;
  ans = max(ans, count);
}
cout << n - ans;
