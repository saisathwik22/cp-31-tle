// Question
// array a given of n size
// goal : make all elements to 0

// operation : select two indices l and r
// s = bitwise XOR of entire subarray [l....r]
// then replace all elements of subarray[l...r] with s

// operation can be used atmost 8 times
// find sequence of operations, to make all elements 0

// Bitwise XOR
// a^a = 0
// 0^0 = 1^1 = 0
// 0^1 = 1^0 = 1

// Argument:
// if n is even, operations are 2
// apply XOR [1....n] 
// apply XOR [1....n] again
// if n is odd, operations are 4
// apply XOR [1....n - 1]
// apply XOR [1....n - 1] again
// apply XOR [n-1 ...... n]
// apply XOR [n-1 ...... n] again


// a = [a1, a2, a3, a4 ...... an]

// n = even
// 1st OP : whole array xor = x [1,n]
// replace all elements of [1,n] with x
// a = [x, x, x, x ..... x]
// 2nd OP : whole array xor = 0 [1,n]
// replace all elements of [1,n] with 0

// n = odd
// 1st OP : xor [1 to n-1] is x
// replace all elements from 1 to n-1 with x
// 2nd OP : xor [1 to n-1] is 0, because all elements are x
// replace all elements from 1 to n-1 with 0
// 3rd OP : xor n-1 and n is z
// replace n-1 and n with z
// 4th OP : xor n-1 and n is 0, because they are same


input arr, n;
if n is even {
  print 2 operations
  print 1 n
  print 1 n
}
else if n is odd {
  print 4 operations
  print 1 n-1
  print 1 n-1
  print n-1 n
  print n-1 n
}
