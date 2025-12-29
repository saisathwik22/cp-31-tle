// question
// given array a[]
// array is ugly when at least one i exists such that:
// a[i] = a[0] + a[1] + ..... + a[i-1]
// when no such i exists, array is beautiful
// make array beautiful by only reordering the elements
// if possible to reorder, print yes, and reordered array
// else print no

// example
// a = [3,3,6,9] -> ugly because 6 = 3 + 3
// reordered array [3,6,3,9]

input n, a[n]
sort(a, a+n)
if max = min, cout << "NO";
else{
  cout << "YES" << endl;
  cout << max << " ";
  for(int i = 0; i < n-1; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

// sort the array
// if max and min are same, NO
// if both are different, print below
// yes
// max, min, [....rest of the array]
