// question
// array a[] given
// b[i] = a[i] ⊕ x 
// ⊕ denotes bitwise XOR operation
// choose an integer x such that b1 ⊕ b2 ⊕ ....... ⊕ bn = 0
// 0 <= x <= 2power8
// print x if exists, else print -1




input n, a[n]
long long total_xor = 0
for(i = 0; i < n; i++) {
  total_xor = total_xor ^ a[i];
}
if (n is odd) cout << total_xor;
else {
  if total_xor = 0, cout << total_xor;
  else cout << -1;
}

// Bitwise XOR concepts
// a ⊕ a = 0
// a ⊕ 0 = a
// a ⊕ b ⊕ c = a ⊕ c ⊕ b

// (a[1] ⊕ x) ⊕ (a[2] ⊕ x) ⊕ ....... ⊕ (a[n] ⊕ x)
// we write x also n times
// (a[1]⊕a[2]⊕.....⊕a[n])⊕(x⊕....⊕x)

// CASE 1 : n is EVEN
// when n is even, xor of all x is 0
// a[1]⊕a[2]⊕.....⊕a[n]⊕0 = 0 ?
// xor of all elements should be 0
// value of x doesn't matter

// CASE 2 : n is ODD
// when n is odd, xor of all x is x
// a[1]⊕a[2]⊕.....⊕a[n]⊕x = 0 ?
// since we know x⊕x = 0
// x = xor of all array elements
