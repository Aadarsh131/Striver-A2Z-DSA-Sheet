# LowerBound and UpperBound
1. **LowerBound**: the smallest index at which the value is >= number

2. **UpperBound**: the smallest index at which the value is > number

eg. [1,2,3,3,3,4], if number=3, then the *lowerbound(lb)* = 2 (the smallest of the indices) and *upperbound(ub)* = 4

we can find the lowerbound/upperbound with binary search but that would cost **O(n)** time complexity, better idea is to use binary search for sorted arrays

### LowerBound
- [optimal sol](./codes/lowerBound_BS.cpp)   
<u>Time complexity</u>: **O(logN)**  
<u>Space complexity</u>: **O(1)**

- from STL we have, `std::lower_bound()`
  ```cpp
  auto lb = lower_bound(arr.begin(),arr.end(), n) //it would return the iterator to that element/index

  //to find the index
  int lb = lower_bound(arr.begin(),arr.end(), n) - arr.begin(); //iterator difference would return the index 
  ```
### UpperBound
- codes is exactly same instead of `>=` just do `>` in  `if (arr[mid] >= n)`
 


