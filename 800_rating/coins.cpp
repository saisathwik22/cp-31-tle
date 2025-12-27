// question
// given n and k
// determine whether there exists two non-negative integers x and y
// such that : 2x + ky = n

// n and k are huge constraints : 1 <= k <= n <= 10power18
// O(1) will be correct TC

// example
// n = 5, k = 3
// eq : 2x + 3y = 5
// YES : x = 1, y = 1

// 2x + ky = n
// 2x = n - ky
// LHS (2x) is always even because divisible by 2
// since, LHS = RHS for a valid x and y
// RHS (n - ky) also needs to be even

input n, k
if n is even || n-k is even, then "YES";
else "NO"

// if (n is even) || (n-k is even) "YES"
// else "NO"
// n is even, x = n/2, y = 0
// n-k is even, x = n-k, y = 1

// case 1 : n is even , x = n/2, y = 0
// RHS : (n-k) and y >= 0
// when y = 0, RHS becomes n and even
// 2x = n --> x = n/2 with y=0
// so, when n is even, ans is YES

// case 2 : n is odd
// 2x = n - ky
// n is odd, let z = ky
// 2x = odd - z
// LHS is even, that means (odd - z) is even
// (odd - z) is even only when z is odd
// so, (n - k) is even


// k can't be even
// if k was even
// ky will be even, for y=odd or y=even
// since n is odd, ky is even (k even)
// odd - even = odd, answer is NO
