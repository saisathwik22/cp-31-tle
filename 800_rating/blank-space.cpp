// question
// given array a of 0s and 1s
// find length of longest blank space
// blank space : consecutive elements with only 0s


input n, a[]
int tempLen = 0, finalLen = 0;
for(i = 0; i < n; i++) {
  if (a[i] == 0) {
    tempLen++;
    finalLen = max(finalLen, tempLen);
  }
  else if( a[i] == 1) {
    tempLen = 0;
  }
}
cout << finalLen << endl;
