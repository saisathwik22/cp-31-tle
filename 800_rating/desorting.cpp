// question
// given array sorted in ascending order
// minimum no. of operations to make array un-sorted
// an operation involves:
// - choose an index i (1 <= i <= n-1)
// - cant choose i at last index
// - add 1 to elements a[1], a[2],......, a[i]
// - subtract 1 from elements a[i+1],.......,a[n]

// example
// arr = [1,8,10,13]
// choose element 10 as i
// 1st operation: [2, 9, 11, 12]
// 2nd operation: [3, 10, 12, 11]
// array became un-sorted
// ans = 2

input long long n, a[]
long long ops = INT_MAX;
for(int i = 0; i < n-1; i++) {
  if(a[i] <= a[i+1]) {
    long long diff = a[i+1]-a[i];
    long long rqd_ops = diff/2 + 1;
    ops = min(ops, rqd_ops);
  }
  else ops = 0;
}
cout << ops << endl;


// approach
// a[1] <= a[2] <= a[3] <= a[4] <= ........ <= a[n-1] <= a[n]
// +1 in segment (1) : a[1] <= a[2] <= a[3] --> still increasing, nature doesnot change
// -1 in segment (2) : a[4] <= ...... <= a[n-1] <= a[n] --> still increasing, nature doesnot change
// relation b/w a[3] and a[4] changes
// a[3] won't remain <= a[4] because a[3] is increasing and a[4] is decreasing
// we are trying to break the increasing pattern at index i, to make it unsorted
// change in pattern can occur between a[i-1] and a[i] OR a[i] and a[i+1]

// so we are going to check every adjacent pairs which can break the pattern in least no. of operations

// a[i] <= a[i+1]
// a[i+1] - a[i] = d
// no. of operations to break the pattern = (d/2) + 1
// d/2 operations will make a[i+1] == a[i]
// we need to break the pattern and make a[i] > a[i+1], so the extra 1 operation is needed.
// so its (d/2) + 1
