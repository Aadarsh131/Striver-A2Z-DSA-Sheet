# Find the Longest subarray with sum `k`

> NOTE: subarray is contigous elements of the array  
>e.g, in `arr[] = {1,2,3,4,5};` `[2,3,5]` is not subarray (as it is not contigous), it is called *subsequence*

- [Bruteforce Sol](./codes/bruteForce.cpp)  
Time Complexity: **O(n<sup>2</sup>)**  
Space Complexity: **O(1)**

- [Better Sol](./codes/betterSol.cpp)  
  Time Complexity: 
  - using `std::map`: **O(NlogN)**  
  - using `std::unordered_map`: 
    - Average case: **O(1)**
    - Worst case: **O(N<sup>2</sup>)** *(the case where all the keys when divided by 10 are producing the same remainder, so, the collision will happen in the corresponding internally implemented linkedList)*

  Space Complexiyt: **O(N)**

- [Optimal Sol]