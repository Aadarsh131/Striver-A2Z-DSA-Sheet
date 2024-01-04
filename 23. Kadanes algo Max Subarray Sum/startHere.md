# Find Max Subarray Sum and also print it
- [BruteForce Sol](#) (not implemented)- try out every possible subarray sum and check  
<u>Time Complexity</u>: **O(n<sup>2</sup>)**  
<u>Space Complexity</u>: **O(1)**

- [Optimal Sol](./codes/optimalSol(kadanes%20algo).cpp)(*Kadanes algo*)- check for the sum while looping but if sum is found less than 0, drop the previous sum value, but keep track of the maximum meanwhile  
<u> Time Complexity</u>: **O(n)**  
<u>Space Complexity</u>: **O(1)**

