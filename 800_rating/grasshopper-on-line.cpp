// question
// two int x and k given
// grasshopper starts from point 0 to point x
// it can jump some distance d on OX axis, d is not divisible by k
// smallest number of moves to reach the point x

// example
// x = 10, k = 2
// start from 0 and jump to 7, distance 7 not divisible by k=2
// from 7 jump to 10, distance 3 not divisible by k=2
// moves are : 7 3

input x, k;
if (x < k) {
  cout << 1 << endl;
  cout << x << endl;
}
else if(x == k) {
  cout << 2 << endl;
  cout << x-1 << " " << 1 << endl;
}
else {
  d = x;
  if(d % k == 0) {
    d--;
    cout << 2 << endl;
    cout << d << " " << x-d << endl;
  }
  else {
    cout << 1 << endl;
    cout << d << endl;
  }
}

// approach
// when x < k, we can make reach in single move of distance x
// when x == k, 
// if x = 5, k = 5
// we jump dist 4 (x-1) which is not divisible by k, and then jump dist 1
// so when x == k, split into two moves of distance x-1 and 1

// when x > k, say d = x
// if d is divisible by k, d--
// there will be 2 moves, d and (x-d)
// if d is not divisible by k, jump distance d directly

