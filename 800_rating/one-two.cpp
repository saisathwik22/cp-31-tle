// question
// given array a = {a1, a2, ....., an} (array only contain 1s and 2s)
// find integer k (1<=k<=n-1) such that
// a1 * a2 * .... * ak = ak+1 * ak+2 * .... * an
// find the smallest possible k

// example
// a = [2,2,1,2,1,2]
// k = 2 ---> (2*2) = (1*2*1*2) = 4

long long;
input n, a[n];
total_twos = 0, curr_twos = 0;
for(i = 0; i < n; i++) {
  if(a[i] == 2) total_twos++;
}
ans = -1;
for(i = 0; i < n; i++) {
  if(a[i] == 2) curr_twos++;
  if(curr_twos == total_twos - curr_twos) {
    ans = -1;
    break;
  }
}
cout << ans << endl;


// 1s donot affect the product
// only 2s will affect the product

// instead of maintaining product
// maintain count of 2s in different segments, and compare
// choose an arbitary k, maintain below counts
// two_count_till_k, two_count_after_k
// O(n * n) works coz n ~ 10^2

// Optimization - Higher Constraints
// Prefix Calculation
// [0,n] - [0,k-1] = [k,n]
// [2,2,1,2,1,2]
// total_twos = 4
// curr_twos = 2 (till 2nd element)
// total_twos - curr_twos = 2
// ans = 2
