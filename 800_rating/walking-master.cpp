// question
// given int a,b,c,d
// minimum no. of moves to go from (a,b) to (c,d)
// from point (x,y) only two moves possible:
// 1. top right : (x + 1, y + 1)
// 2. adjacent left : (x - 1, y)
// if not possible to reach destination, return -1

// y can only increase or stay at current level, can't decrease

// example :
// (-1,0) to (-1,2)
// (-1,0) ---> (0,1) top right
// (0,1) ----> (-1, 1) adj left
// (-1,1) -----> (0,2) top right
// (0,2) ----> (-1, 2) adj left

// solution
input sx, sy, dx, dy;
if(dy < dx) cout << -1 << endl; continue;

int moves = dy - sy;
sx = sx + m;

if(sx < dx) cout << -1 << endl; continue;

moves += (sx - dx);
cout << moves << endl;


// source = (sx, sy) destination = (dx, dy)
// two moves : (x,y) --> (x+1, y+1) || (x-1, y)
// we can either increase y or stay at the same y level



// OBSERVATION 1:
// when source y is greater than destiantion y, we can't reach dy from sy 
// because we can't decrease our y coordinate value
// so, dy < sy, RETURN "-1"

// OBSERVATION 2:
// when destination y is greater than equal to source y, we can reach dy from sy
// we can move by only top-right move (x+1, y+1); increasing y
// so, when dy >= sy, moves = dy - sy
// example dy = 3, sy = -1, distance b/w them is 3-(-1) = 4
// dy can be achieved by doing (dy-sy) moves on sy

// moves m = dy - sy

// OBSERVATION 3:
// when sy moves by m, sx will also move by m in right direction
// so, sx = sx + m | when sy moves to dy | m = dy - sy
// so when sy moves by 4 moves, sx will also move by 4 moves

// OBSERVATION 4:
// once dy has been achieved, don't apply move 1 : (x+1, y+1) ever again
// because it will increase the y value, and we can't decrease it back.
// only use move 2 : (x-1, y) because it won't affect the y value

// after dy is achieved, if sx < dx, RETURN "-1"
// we can't apply move 1(x+1, y+1) as it will increase y value
// we can't apply move 2(x-1, y) as it will decrease x value

// after dy is achieved, if sx > dx, then apply move 2
// move 2 (x-1, y) will decrease sx and bring it to dx,
// and it won't affect y value
