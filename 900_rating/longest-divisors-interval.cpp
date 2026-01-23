// Question
// given integer n
// find max size of interval [l,r] such that
// for every i in interval, n is multiple of i
// size of interval [l,r] = r - l + 1


// Argument
// if for N there was some segment [l, r] such that 
// every element in this segment divided N
// then [1 to r - l + 1] will work because___
// for every element
// i in [1, r-l+1] is having atleast 1 multiple in [l, r]


input n;
i = 1;
while(n % i == 0) i++;
cout << i - 1 << endl;
