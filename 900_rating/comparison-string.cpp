// Question
// given string s of length n of "<",">"
// create array a of length n + 1
// s[i] = "<" only if a[i] < a[i+1]
// s[i] = ">" only if a[i] > a[i+1]

// if arr a satisfy string s, then it's compatible

// cost of array = no. of unique elements
// Minimum cost among all arrays which are compatible

// s = "< < > >"
// arr = [1 2 5 4 2] cost = 4
// arr = [13 37 42 37 13] cost = 3
// answer is cost = 3


// Argument:
// answer = length of longest substring of same chars + 1

// s = < < < > < > > >
// longest substring with same chars
// {< < <} or {> > >} length = 3
// answer = 3 + 1 = 4
// a < b < c < d
// a < b < c < d > c < d > c > b > a
// unique elements = 4 (a,b,c,d)

input int n, string s;
ans = 1, curr = 1;
for(i = 1 to n) {
  if (s[i] == s[i - 1]) curr++;
  else {
    ans = max(ans, curr);
    curr = 1;
  }
}
ans = max(ans, curr);
return ans + 1;
