// question
// given array, n, k
// print yes if there is a segment in array in which k is the most occuring element.
// else print no

input n, k, arr;
bool flag = false;
for(int i = 0; i < n; i++) {
  if(arr[i] == k) {
    flag = true;
    break;
  }
}
if(flag) cout << "Yes"
else cout << "No"
