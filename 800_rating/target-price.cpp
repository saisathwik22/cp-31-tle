// question
// 10x10 matrix given with 'X' and '.'
// 'X' represents arrow and '.' represents no arrow
// 1st ring gives point 1, 2nd ring point 2...... 5th ring point 5
// calculate score obtained by shooting arrows ('X')

// example
  0 1 2 3 4 5 6 7 8 9
  - - - - - - - - - -
0 X . . . . . . . . .
1 . . . . . . . . . .
2 . . . . . . . X . .
3 . . . . . X . . . .
4 . . . . . . X . . .
5 . . . . . . . . . .
6 . . . . . . . . . X
7 . . X . . . . . . .
8 . . . . . . . . . .
9 . . . . . . . . . X
// 1 + 1 + 1 + 3 + 3 + 4 + 4 == 17
// 1st ring covers row 0 row 9 col 0 col 9 - 1pt
// 2nd ring covers row 1 row 8 col 1 col 8 - 2pts
// 3rd ring covers row 2 row 7 col 2 col 7 - 3pts
// 4th ring covers row 3 row 6 col 3 col 6 - 4pts
// 5th ring covers row 4 row 5 col 4 col 5 - 5pts
// 1st ring covers row 0 row 9 col 0 col 9

// approach
// use predefined array score[][]
// score[i][j] = score of the cell according to the ring it is present in

// code
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        char m[10][10];
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> m[i][j];
            }
        }
        int score[10][10];
        // 1st row last row
        for(int j = 0; j < 10; j++) {
            score[0][j] = 1;
            score[9][j] = 1;
        }
        // 1st col last col
        for(int i = 0; i < 10; i++) {
            score[i][0] = 1;
            score[i][9] = 1;
        }
        
        // ring 2
        for(int j = 1; j < 9; j++) {
            score[1][j] = 2;
            score[8][j] = 2;
        }
        for(int i = 1; i < 9; i++) {
            score[i][1] = 2;
            score[i][8] = 2;
        }
        
        // ring 3
        for(int j = 2; j < 8; j++) {
            score[2][j] = 3;
            score[7][j] = 3;
        }
        for(int i = 2; i < 8; i++) {
            score[i][2] = 3;
            score[i][7] = 3;
        }
        
        // ring 4
        for(int j = 3; j < 7; j++) {
            score[3][j] = 4;
            score[6][j] = 4;
        }
        for(int i = 3; i < 7; i++) {
            score[i][3] = 4;
            score[i][6] = 4;
        }
        // ring 5
        for(int j = 4; j < 6; j++) {
            score[4][j] = 5;
            score[5][j] = 5;
        }
        for(int i = 4; i < 6; i++) {
            score[i][4] = 5;
            score[i][5] = 5;
        }
        
        int total_score = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(m[i][j] == 'X') {
                    total_score += score[i][j];
                }
            }
        }
        cout << total_score << endl;
    }
    return 0;
}
