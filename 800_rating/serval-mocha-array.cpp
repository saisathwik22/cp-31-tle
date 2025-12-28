// question
// n given, array a[] given
// possible to make it beautiful by reordering elements ? "YES or NO"
// beautiful array : all prefix arrays are good, overall array a is beautiful
// prefix length should be >= 2 
// {a1, ....., an} is good if gcd(a1,....,an) <= n

input n, a[]
int flag = 0;
for(i = 0; i < n; i++) {
  for(j = i + 1; j < n; j++) {
    if(__gcd(a[i], a[j]) <= 2) flag = 1;
  }
}
if flag == 0, "NO";
else "YES";


// Argument : If you find any 2 nos. with gcd <= 2, answer is "YES", else "NO"

// GCD - Greatest Common Divisor
// example : gcd(12, 18) = 6
// gcd(a,b) <= min(a,b)
// gcd(a,b) should divide a and b both
// a >= gcd(a,b) AND b >= gcd(a,b)

// gcd(gcd(a,b), c) = gcd(a,b,c)
// gcd(a,b) >= gcd(a,b,c)
// gcd decreases as parameters increase.

// we start with prefix of length 2, and find gcd
// if gcd(a1, a2) <= 2, then rest all prefixes are also good
// because when parameters increase, length increases, gcd value decreases
// so gcd for all the prefixes will stay <= to their respective length

// if all the prefix arrays are good, overall array is beautiful
// so next prefix arrays are also good if gcd(a1, a2) <= 2
