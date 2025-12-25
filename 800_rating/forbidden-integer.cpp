// question
// obtain integer n
// you have unlimited supply of integers from 1 to k, except integer x
// integer x is not supplied 
// you are allowed to take an arbitary amount of integers (1 to k, except x)
// can you make the sum equal to n ?
// YES: print yes, m (total amount of int taken), m integers (1 to k, except x) whose sum == n

// there can be multiple possible valid sum cominations, output any one of them.

// example
// n = 10, k = 3, x = 2
// we have integers [1, 3] since 2 is excluded
// we can obtain sum 10 using integers [1,3] in below ways
// way 1 : [3, 3, 3, 1] m = 4
// way 2 : [3, 1, 1, 1, 1, 3] m = 6

// example
// n = 7, k = 7, x = 3
// we have integers [1,2,4,5,6,7] since 3 is excluded
// way 1 : [1,6]
// way 2 : [2,5]
// way 3 : [1,2,4]
// way 4 : [7]
// way 5 : [1,4,2]

input n, k, x;
if(x != 1) {
  cout << "YES" << endl;
  cout << n << endl;
  for(int i = 1; i <= n; i++) cout << 1 << " ";
  cout << endl;
}
else if(x == 1) {
  if (k == 1) cout << "NO" << endl;
  if (k == 2 && n is odd) cout << "NO" << endl;
  else {
    cout << "YES" << endl;
    if (n is even) {
      cout << n/2 << endl;
      for(i = 1; i <= n/2; i++) cout << 2 << " ";
      cout << endl;
    }
    else (n is odd) {
      cout << (n-3) / 2 + 1 << endl;
      for(i = 1; i <= (n-3)/2; i++) cout << 2 << " ";
      cout << 3 << endl;
    }
  }
}


// approach

// CASE 1 : [x != 1]
// when x != 1, we can use to obtain sum n
// n = 1 + 1 + 1 + ........ + 1 (n times)
// print "YES", and print 'n' 1s

// CASE 2 : [x == 1]
// we can't use 1 to obtain sum n
// if x == 1 && k == 1, print "NO"

// x == 1 && k == 2, we only have [2] to use, to obtain sum n
// only [2] available, and n is even, print (n/2) no. of 2s, "YES"
// if n is odd, ans is "NO"

// x == 1 && k == 3, we have [2,3] to use, to obtain sum n
// n is even, print (n/2) 2s, "YES"
// n is odd, print one 3, and rest of them 2s
// for 3, print 3
// for 5, print 3,2
// for 7, print 3,2,2
// for 9, print 3,2,2,2
// for 11, print 3,2,2,2,2
