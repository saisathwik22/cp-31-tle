// question
// given string s (lowercase) of length n
// int k also given

// if below is possible, print YES:
// remove exactly k characters from string s
// rearrange the remaining chars to form a palindrome
// else print NO

// example
// k = 2, s = [t a a g a a k]
// remove t and k, to form : aaagaa YES

// a single alphabet is also a palindrome

// example
// k = 0, s = [a b]
// print NO

// example
// k = 2, s = [b a c a c d]
// remove b and d, to form : a c c a YES

// Argument : 
// if no. of odd occurences of letters in string s > k+1 ==> "NO"
// count of odd frequency letters > k + 1, print "NO"
// else "YES"

// s = [a b c d d e e f f f] k=2
// occurences
// a-1, b-1, c-1, d-2, e-2, f-3
// there are 4 odd frequency letters - a,b,c,f
// 4 > (2+1 = 3) , print "NO"


// Palindrome
// in a palindrome string:
// count of odd frequency letters should be either 0 or 1

// x - no. of odd frequency letters
// if x > k + 1, print "NO"
// if x <= k + 1, print "YES"

input n, k
input string s

vector freq(26, 0);
for(i = 0 to n) freq[s[i] - 'a']++;
int odd_freq = 0
for(i = 0 to 26) {
  if freq[i] is odd, then odd_freq++;
}
if odd_freq > k + 1, print "NO"
else print "YES"
