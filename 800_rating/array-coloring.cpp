// question
// given array, determine if possible to color elements in two distinct colors (red, blue)
// such that sum of red elements and sum of blue elements have same parity
// either both red sum and blue sum is even, or both are odd

// calculate even element sum and odd element sum
// compare their parity

input arr[];
int oddSum, evenSum;
for(i = 0; i < n; i++) {
  if(arr[i] % 2 == 0) evenSum += arr[i];
  else oddSum += arr[i];
}
if(oddSum && evenSum are even || oddSum & evenSum are odd) "YES";
else "NO";
