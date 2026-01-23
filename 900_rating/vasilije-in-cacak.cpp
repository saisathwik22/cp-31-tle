// Question
// given integers : n, k, x
// can we choose k distinct integers between 1 and n
// such that their sum is equal to x
// Yes/No

// K distinct int b/w [1,n] whose sum == x

// since 1 to n is sorted array of integers

// 1, 2, 3, 4, 5, .........., n-2, n-1, n
// total_sum = n*(n+1)/2

// Think Greedy !!!

// min sum (greedily) : 1 + 2 + ...... + k (sum of 1st k int from front)
// min_sum = k*(k + 1)/2

// max sum (greedily) : n + n-1 + n-2 + ..... (sum of k int from back)
// max_sum = total_sum - ((n-k) * (n - k + 1))/2

// Argument:
// Wish to make 'x' as a sum such that 
// min sum <= x <= max sum, then answer is YES
// else answer is NO


input n, k, x
int min_sum = k * (k + 1) / 2;
int total_sum = n * (n + 1) / 2;

int max_sum = total_sum - ((n-k) * (n - k + 1)) / 2;

if min_sum <= x <= max_sum, then "YES";
else "NO"
