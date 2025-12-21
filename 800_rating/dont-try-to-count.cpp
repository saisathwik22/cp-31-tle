// Question
// given strings x (length n) and s (length m).
// lengths can be : n < m or n > m or n == m
// after how many minimum number of operations s will appear in x as substring
// one operation : x = x + x (append x to end of x)

// example 1
// x = "eforc" s = "force"
// x += x -> eforc + eforc == eforceforc
// s = "force" found in x, e[force]forc
// so min operations is 1

// example 2
// x = "aaa" s = "aaaba"
// ans = 0

// example 3
// x = "aba" s = "ababa"
// ans = -1 because even after appending x many times to itself, s is not found
// "abaabaabaabaaba...." | "ababa" not found

// example 4
// x = "fjdmcont" s = "tf"
// x += x -> "fjdmcon[tf]jdmcont" ,  string s found, ans = 1

// Approach
// x length is n, for every operation x length gets doubled
// n -> 2n -> 4n -> 8n -> 16n -> 32n
// n and m length can be at max 25
// so at max there can be 5 operations done on the string x
// answer will be in between -1 and 5
// use check() function to check whether string s appears inside string x;

bool check(string s, string x) {
  // if x is shorter than s, s cant fit inside x
  if(x.size() < s.size()) {
    return false;
  }
  // x.size - s.size + 1 ensures we dont go outof bounds
  for(int i = 0; i < x.size() - s.size() + 1; i++) {
    if(x.substr(i, s.size()) == s) return true;
  }
  return false;
}

// substring function
x.substr(i, n)
  if substring found from index i to length n, then it returns true

// main() function  
int n,m;
cin >> n >> m;
string s, x;
cin >> x;
cin >> s;

string x0 = x;
string x1 = x0 + x0;
string x2 = x1 + x1;
string x3 = x2 + x2;
string x4 = x3 + x3;
string x5 = x4 + x4;

int ans = -1;
if(check(s, x0)) ans = 0;
else if(check(s, x1)) ans = 1;
else if(check(s, x2)) ans = 2;
else if(check(s, x3)) ans = 3;
else if(check(s, x4)) ans = 4;
else if(check(s, x5)) ans = 5;

cout << ans << endl;

// TC : O(n * m)
