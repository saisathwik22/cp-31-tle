// Question
// given integers : a, b, n
// b : initial timer of bomb

// every second, timer will decrease by 1
// if timer reaches 0, bomb will explode

// n tools : {x1, x2, x3, .......,  xn}
// each tool can be used only once

// if ith tool used, timer will increase by xi
// however if timer changed to integer larget than a
// the timer will be set to a
// a is the max limit

// max time in seconds until bomb explodes if tools are used optimally


// Argument:
// answer is (sum(min(xi, a - c))) + b

// if no tools were available, max time possible will be 'b' seconds
// even if tools were available, there would be atleast 'b' seconds delay
// if you pick ith tool, 
// timer = min(timer + xi, a)


input a, b, n;
input x[n];

max_time = b;
for(i = 0 to n) {
  max_time += min(x[i], a - 1);
}
return max_time;
