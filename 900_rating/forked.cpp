// Question
// Infinite Chessboard
// King placed at (xk, yk) and Queen placed at (xq, yq)
// A Horse moves in L format on chessboard
// 1 step in one direction, 2 steps in other direction
// now (a,b) are given in input
// horse moves a steps in one direction, b steps in other direction

// place the horse in such a position/cell such that
// horse can attack both king and queen from that cell
// find such cells/positions


// Approach
// we need to find a cell from which a horse can attack both king and queen
// instead of finding for such a random cell, do below:
// find cells which can be reached from king using horse moves
// find cells which can be reached form queen using horse moves
// count the common cells from both sets

// Considering an infinite chessboard
// king at a point (xk, yk) can reach 8 cells using horse moves(L)
// same with queen

// use 2 sets King and Queen which stores cells that can be reached from king and queen cell
// choose set because it works in logarithmic terms and stores unique pairs

input a, b;
input xk, yk;
input xq, yq;

Set<pair<int, int>> king, queen;
for(j = 0; j < 4; j++) {
  king.insert({xk + dx[j] * a, yk + dy[j] * b});
  king.insert({xk + dx[j] * b, yk + dy[j] * a});
  queen.insert({xk + dx[j] * a, yk + dy[j] * b});
  queen.insert({xk + dx[j] * b, yk + dy[j] * a});
}
int ans = 0;
for(auto pos : king) {
  // if pos from king is found in queen, ans++
  if(queen.find(pos) != queen.end()) ans++;
}
return ans;
