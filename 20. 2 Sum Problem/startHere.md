# 2 sum problem

- [BruteForce sol](./codes/BruteForce.cpp)- Iterate for all elements   
<u>Time Complexity</u>: **O(n<sup>2</sup>)**  
<u>Space Complexiyt</u>: **O(1)**

- [Better sol](./codes/BetterSol.cpp)- using hashmap  
<u>Time Complexity</u>:  
  - using `std::map`:  **O(NlogN)**    
  - using `std::unordered_map`: 
      - Best case- **O(N)**  
      - Worst case- **O(N<sup>2</sup>)**  

  <u>Space Complexiyt</u>: **O(N)**

- [Optimal sol](./codes/OptimalSol.cpp)- sort and then check the target sum while keeping one pointer at first index and second pointer at last index of the array, and track the sum of values at those pointers, now keep decreasing the last pointer if the found sum is greater than the target or keep increasing the first pointer if the found sum is less than the target sum.  

  <u>Time complexity</u>: **O(n)** + **O(nlogn)** (incl. sorting)  
  <u>Space Complexity</u>: **O(1)**



