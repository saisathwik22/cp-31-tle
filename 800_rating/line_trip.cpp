// question
// given n - number of gas stations, x - destination point
// array given : station[i] - gas station point
// minimum possible volume of gas that will allow to travel from point 0 to point x and back to point 0
// 1 litre of fuel per 1 unit distance
// no gas stations at points 0 and x

// approach
// take max_fuel as 2*x and currFuel count starting from max_fuel 2*x
// store gas station points in set to check for the existence later.
// ans variable will track least fuel count reached while traveling from 0 to x and x to 0
// this ans variable will be subtracted from max_fuel variable
// calculate currFuel after traveling from 1 to x including all the refills in between
// calculate currFuel after traveling from x-1 to 0 including all the refills in between
// for every unit move, store min value reached by currfuel in ans variable
// at last fuel-ans will be output

#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    set<int> s;
    for(int x : a) s.insert(x);
    int fuel = 2*x;
    int currFuel = fuel;
    int ans = fuel;
    for(int i = 1; i <= x; i++) {
      currFuel--;
      ans = min(ans, currFuel);
      if(s.count(i)) currFuel = fuel;
    }
    for(int i = x-1; i >= 0; i--) {
      currFuel--;
      ans = min(ans, currFuel);
      if(s.count(i)) currFuel = fuel;
    }
    cout << (fuel - ans) << endl;
  }
}
