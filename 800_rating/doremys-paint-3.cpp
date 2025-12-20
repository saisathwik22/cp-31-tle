// question
// given array and integer n
// print yes if its possible to make array 'good' by re-ordering the elements, else print no
// an array (a1, a2, a3, a4, ...... , an-1, an) is good if
// a1 + a2 = a3 + a4 = an-1 + an = k
/* test cases
t = 5

n = 2
array = [8, 9]
yes

n = 3
array = [1, 1, 2]
yes

n = 4
array = [1, 1, 4, 5]
no

n = 5
array = [2, 3, 3, 3, 3]
no

n = 4
array = [100000, 100000, 100000, 100000]
yes
*/ 

// Approach
// use map to store frequency of distinct elements
// case 1 : if there is only 1 distinct element, then print yes irrespective of length even or odd
// case 2 : there two distinct elements n1, n2 with frequency f1, f2
// if length is even, f1 = f2, print yes
// if length is odd, abs(f1 - f2) == 1, print yes
// if length is odd, abs(f1-f2) != 1, print no

long long n;
cin >> n;
long long arr[n];
for(int i = 0; i < n; i++) cin >> arr[i];
map<long long, long long> mp;
for(int i = 0; i < n; i++) mp[arr[i]] += 1;
if(mp.size() >= 3) cout << "No" << endl; // more than two distinct elements
else {
  long long f1 = mp.begin()->second;
  long long f2 = mp.rbegin()->second;
  if(n is even/odd && f1 == f2) cout << "Yes" << endl;
  else if(n is odd && abs(f1-f2) == 1) cout << "Yes" << endl;
  else if(n is odd && abs(f1-f2) != 1) cout << "No" << endl;
}
