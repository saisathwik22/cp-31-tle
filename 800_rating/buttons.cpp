// question
// given 3 buttons a, b, c
// a pressed only by user1, b pressed only by user2, c can be pressed by both
// user1 and user2 press the buttons turn by turn
// everytime button is pressed, its values decreases by 1
// user1 and user2 keep on clicking the buttons.
// user1 is winner if user2 have no buttons left to press
// user2 is winner if user1 have no buttons left to press

// first finish off with c
// if c is odd, last press is of user1, user2 lost
// if c is even, last press is of user2, user1 lost

c is odd {
  if b > a, then print "Second";
  else, then print "First";
}
c is even {
  if a > b, then print "First";
  else, then print "Second";
}
