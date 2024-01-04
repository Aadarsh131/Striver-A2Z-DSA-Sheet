# Find the maximum profit from the given stock prices 

 - eg. [4,6,1,3,5,9,3] are the stock prices of day 1 to day 7. We can get the maximum profit when we buy the stock on day 3 and sell on day 6, with profit of (9-1) = 8.

 ## Intuitioin/Approach
 While keeping a pointer at `i = arr.size()-2` we need to find the maximum of prices from `i+1` to `end` of list and also keep track of the `maximumDifferece` found when subracting `i` from maximum price found.
 
 [Optimal sol](./codes/optimalSolUsingDp.cpp) (its a DP solution, as we are keeping a track of maximum price throughout the end of list)