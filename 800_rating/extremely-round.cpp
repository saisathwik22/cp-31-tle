// question
// a positive integer is extremely round if it has only one non-zero digit
// given integer n, find no. of extremely round integers x such that 1 <= x <= n
// 5000, 4, 1, 10, 200 ----> extremely round
// 42, 13, 666, 77, 101 ----> not round

// example 
// i/p = 9, o/p = 9
// i/p = 42, o/p = 13
// i/p = 13, o/p = 10
// i/p = 100, o/p = 19
// i/p = 111, o/p = 19

// Precomputation
// precompute whether an integer x is extremely round or not.

// precompute round numbers with one non zero digit
// count elements <= n for each test case

// check function
bool check(long long x) {
  long long digit_count = 0;
  long long zeros_count = 0;
  while(x) {
    if(x%10 == 0) zeros_count++;
    digit_count++;
    x /= 10;
  }
  return zeros_count == digit_count - 1;
}

// main function
// precompute all round numbers
vector<long long> round_numbers;
for(long long i = 1; i <= 999999; i++) {
  if(check(i) == true) round_numbers.push_back(i);
}

// each test case
long long n;
cin >> n;
long long ans = 0;
for(i = 0; i < round_numbers.size(); i++){
  if(round_numbers[i] <= n) ans++;
  else break;
}
cout << ans << endl;
