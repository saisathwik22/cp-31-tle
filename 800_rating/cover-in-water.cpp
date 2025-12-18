// Question
// given string of '#' (blocked cell) and '.' (empty cell)
// action 1 : pour water in empty cell
// action 2 : remove water from a cell and place in other empty cell
// find minimum number of times he need to do action 1 to fill all empty cells.
// action 2 can be performed any number of times.
// when a cell i is empty and i-1 & i+1 are filled with water, then i fills automatically.

// example:
// # # . . . . #
// fill third and fifth cell with water, so that 4th cell fills (action 1 - two times)
// now remove water from 5th cell and place it in 6th cell (Action 2)
// ans = 2

// example:
// . . # . # . .
// fill 1st cell and 2nd cell (action 1 - 2 times)
// fill 4th cell (action 1 - 1 time)
// fill 6th and 7th cell (action 1 - 2 times)
// ans = 5

// approach
// when three consecutive empty cells (dots) are there, fill 1st and 3rd cell, 2nd automatically fills
// so for three consecutive empty cells, two action 1s are required.
// else every individual cell requires an action 1 to fill

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool three_empty_cells = false;
        int total_count_empty_cells = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '.' && i + 1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.') {
                three_empty_cells = true;
                break;
            }
            if(s[i] == '.') {
                total_count_empty_cells += 1;
            }
        }
        if(three_empty_cells) cout << 2 << endl;
        else {
            cout << total_count_empty_cells << endl;
        }
    }
    return 0;
}
