# Find the Longest subarray with sum `k`

> NOTE: subarray is contigous elements of the array  
>e.g, in `arr[] = {1,2,3,4,5};` `[2,3,5]` is not subarray (as it is not contigous), it is called *subsequence*

- [Bruteforce Sol](./codes/bruteForce.cpp)  

  <u>Time Complexity</u>: **O(n<sup>2</sup>)**  
  <u>Space Complexity</u>: **O(1)**

- [Better Sol](./codes/betterSol.cpp)  

  <u>Time Complexity</u>: 
  - using `std::map`: **O(NlogN)**  
  - using `std::unordered_map`: 
    - Average case: **O(1)**
    - Worst case: **O(N<sup>2</sup>)** *(the case where all the keys when divided by 10 are producing the same remainder, so, the collision will happen in the corresponding internally implemented linkedList)*

  <u>Space Complexity</u>: **O(N)**

- [Optimal Sol](./codes/optimalSol.cpp)- using 2 pointers, and keep on trimming the array until the longest length is found with sum equals to `k`  

  <u>Time Complexity</u>: **O(2n)**  
  <u>Space Complexity</u>: **O(1)**