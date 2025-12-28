// question
// binary string s (possibly empty)
// operation was performed several times
// operation: add 0 to one end of string, and 1 to other end of string
// 1011 could become --> 0[1011]1 or 1[1011]0
// we are given final string after operations were perfromed
// find length of shortest possible initial string before operations.

input n, string s;
i = 0, j = n-1, len = n;
while(s[i] != s[j] && i <= j) {
  i++;
  j--;
  len -= 2;
}
cout << len << endl;
