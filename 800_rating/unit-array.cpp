// question
// given n, array a[], array contains -1 or 1 
// array a[] is good if:
// 1. a[1] + a[2] + ...... + a[n] >= 0
// 2. a[1] * a[2] * ...... * a[n] = 1
// minimum operations to make array good
// operation:
// select an a[i] and change its value to opposite
// if -1 change it to 1 | if 1 change it to -1

// example
// a = [-1, -1, 1, -1] sum = -2, prod = -1
// now change a -1 to 1 => 1 operation
// a = [-1, -1, 1, 1] sum = 0, prod = 1


input n, a[n];
plus_count = 0, minus_count = 0;
for(i = 0; i < n; i++) {
  if a[i] == 1, plus_count++;
  else if a[i] == -1, minus_count++;
}
ops = 0;
while(plus_count < minus_count || minus_count is odd) {
  ops++;
  plus_count++;
  minus_count--;
}
cout << ops << endl;

// approach

// sum >= 0, when no of 1s >= no of -1s
// product = 1, when no. of -1s are even
// product = -1, when no. of -1s are odd

// when (no. of 1s  < no. of -1s || no. of -1s is odd), then only product = -1
// for that we need to change a -1 to 1
// when we change a -1 to 1, -1 count decreases, 1 count increases

