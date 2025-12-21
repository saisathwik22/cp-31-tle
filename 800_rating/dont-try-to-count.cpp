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
