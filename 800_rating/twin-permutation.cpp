// question
// permutation a of length n contains unique integers 1 to n in arbitary order
// find permutation b such that :
// a1+b1 <= a2+b2 <= a3+b3 <= ...... <= an+bn
// permutation b always exists in given question


// example
// a = [1,2,4,5,3]
// b = [1,2,4,3,5]
// 1+1 <= 2+2 <= 4+4 <= 5+3 <= 3+5

// example
// a = [3, 2, 1]
// b = [1, 2, 3]
// 3+1 <= 2+2 <= 1+3


// condition : a[i] + b[i] <= a[i+1] + b[i+1]
// focus on creating a[i] + b[i] = a[i+1] + b[i+1]
// condition : a1 + b1 = a2 + b2 = ...... = an + bn = "k"

// catch : b[i] = n + 1 - a[i]

for(i = 0; i < n; i++) {
  cout << n + 1 - a[i] << " ";
}
cout << endl;
