// question
// given array a[] of length n
// two empty arrays b[], c[] of length lb and lc
// add each element of array a[] to exactly one of b[] or c[] to satisfy following conditions
// 1. both arrays b[] c[] are non-empty
// 2. lb, lc >= 1
// 3. for any two index i (1<=i<=lb) and index j (1<=j<=lc), c[j] is not divisor of b[i]
// b[i] % c[j] != 0
// any i and j should satisfy above condition

// output two arrays b[] and c[]

// example
// b[i] % c[j] != 0
// a = [1,2,3,4,5]
// b = [1,3,5] c = [2,4] valid !!!
// b = [1,2,3,4] c = [5] valid !!!

input n;
vector<ll> a(n);
for(i = 0; i < n; i++) cin >> a[i];
long long mx = max element of a[];
vector<ll> b, c;
for(i = 0; i < n; i++) {
  if a[i] != mx, then b.push_back(a[i]);
  else c.push_back(a[i]);
}
if b.size() == 0, then cout << -1 << endl;
else {
    cout << b.size() << " " << c.size() << endl;
    for(auto it : b) cout << it << " ";
    cout << endl;
    for(auto it : c) cout << it << " ";
    cout << endl;
}



// if array a[] has all same elements, answer is "-1"
// because b[i] % c[j] != 0, when b[] and c[] has same elements, % will be 0 for all elements

// if array a[] have more than 1 distinct element, answer always exists
// every b[i] and c[j] should satisfy, b[i] % c[j] != 0
// when c[j] > b[i], the above condition always satisfies
// when c[j] <= b[i], there are two cases : 
// case 1 : b[i] % c[j] != 0
// case 2 : b[i] % c[j] == 0

// find max of array a[] and put it in array c[]
// when every element in array c[] is the max element in array a[], the condition satisfies always
