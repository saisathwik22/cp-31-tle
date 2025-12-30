// question
// array a is good, if all pairs of adjacent elements share different parity
// if a[i] and a[i+1] share same parity --> array is not good
// find minimum operations to make array good
// operation:
// if you find a same parity pair
// delete them and insert their product in same position

// example
// a = [1, 7, 11, 2, 13]
// 1 and 7 same parity---> delete 1 and 7 ----> insert 7
// a = [7, 11, 2, 13]
// 7 and 11 same parity --> delete 7 and 11 --> insert 77
// a = [77, 2, 13]
// operations = 2

// approach
// count no. of pairs with different parity

int count = 0;
input n, arr[n];
for(i = 0; i < n-1; i++) {
  if(arr[i] % 2 == arr[i+1] % 2) {
    count++;
  }
}
cout << count << endl;
