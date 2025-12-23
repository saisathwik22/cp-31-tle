// question
// given array, minimum operations to make product of array elements = 0
// an operation can be arr[i] + 1 or arr[i] - 1

input arr[n];
int ans = INT_MAX;
for(int i = 0; i < n; i++) {
  ans = min(ans, abs(arr[i]));
}
cout << ans << endl;

// finding minimum absolute element from array
