# Topics Covered
- [Rotate array by `K` places to left](#rotate-array-by-k-places-to-left)
- [Move Zeros to End](#move-zeros-to-end)
- [Union and Intersection of Two Sorted Array](#union-and-intersection-of-two-sorted-array)
# Rotate array by `K` places to left

If we rotate by length of the whole array times we get back the original array.  
Hence, `K = K % n` (n = length of arr)


## Implementation

[Brute Force Solution](./codes/rotate%20solution/bruteForceSol.cpp)- Keep a temp array of size `K` and after shifting all the item of the original array to left by `K` places, place the temp array's items at the end of the original array  

> Time Complexity: **O(N+K)**  
> Space Complexity: **O(K)**

[Optimal Solution](./codes/rotate%20solution/optimalSolutioin.cpp)-
By keeping the pointer at the position `K`, Reverse the left side temp arr and right size temp arr, then reverse the whole array
 
> Time Complexity: **O(N)**   
> Space Complexity: **O(1)**

# Move Zeros to End

## Implementation

[Brute Force Solution](./codes/move%20zero%20to%20end/bruteForceSol.cpp)

>Time Complexity:  
>- Best Case- **O(2n)**
>- Worst Case- **O(3n)**
>
>Space Complexity: 
>- Worst Case- **O(n)**

[Optimal Solution](./codes/move%20zero%20to%20end/optimalSol.cpp)

>Time Complexity: **O(n)**  
>Space Complexity: **O(1)**

# Union and Intersection of Two Sorted Array
### 1. Union (only output the unique elements of two arrays)  
>- [Brute Force Sol](./codes/Union%20of%202%20sorted%20arr/bruteForceSol.cpp)-  using the `set` datastructure  
>
>   Time Complexity:
>   - Worst Case- **O(n1 logN + n2 logN)** + **O(n1+n2)**  
>
>   Space Complexity:
>   - Worst Case- **O(2(n1+n2))** 

>- [Optimal Sol](./codes/Union%20of%202%20sorted%20arr/optimalSol.cpp)- using 2 pointer for 2 arrays 
>
>   Time complexity: **O(n1+n2)**  
>   Space complexity:   
>   - Worst Case- **O(n1+n2)**

### 2. Intersection
> - [Brute Force approach](#) (not implemented)-  checking each element of 1st array to each element of 2nd array
>
>   Time Complexity: **O(n<sup>2</sup>)**  
>   Space Complexity: 
>     - Worst Case- **O(n)** (biggest of the two array)
>
> - [Optimal Solution](./codes/Intersection%20of%202%20sorted%20arr/optimal.cpp)- using 2 pointers   
>Time Complexity: **O(n1+n2)**  
>Space Complexity: 
>   - Worst Case- **o(n)** (smallest of the two array)