// question
// array a = [a1, a2, a3, ......, am] length = m
// array b[] created out of array a[]
// creating array b[] of length n
// first write a[1] into b[]
// then fill b[] with a[i] where a[i-1] <= a[i] (2 <= i <= m)

// input 
// now the sequence b[] is given as input with length n
// we need to guess probable sequence a[] with length m (n <= m <= 2n)
//output
// sequence a[] with length m

// consider a = [4,3,2,6,3,3] for creation of b[]
// b = [4,6,3] with length 3 -> given as input
// output a = [4,3,2,6,3,3] with length 6

vector a;
input n, vector b(n);
a.push_back(b[0]);
for(int i = 1; i < n; i++) {
  if(b[i] >= b[i-1]) a.push_back(b[i]);
  else {
    a.push_back(b[i]);
    a.push_back(b[i]);
  }
}
cout << a.size() << endl;
for(auto it : a) {
  cout << it << " ";
}
cout << endl;



// approach
// a = {a1, a2, ......, am}
// for a a[i] to be included in b[], a[i] >= a[i-1]
// if a[i] < a[i-1], a[i] can't be included in b[]
// b = {b1, b2, b3, ......., bn}
// every b[i] if has been taken from a[], must be greater than equal to previous number in a[]

// example
// b = [4 4 6 3]
// a = [4 4 6 3 3]
// at b[i] = 3, if 3 is taken from a[], 3 should be >= x (its previous number in a[])

// so for b[i]
// if b[i] >= b[i-1], append b[i] once
// if b[i] < b[i-1], append b[i] twice
// a = [4 4 6 x 3]
