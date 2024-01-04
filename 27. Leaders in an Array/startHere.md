# Find the Leaders in an array
Leaders are the those elements after which there are no elements greater than it.

eg. in [10, 22, 12, 3, 0, 6]- 22,12 and 6 are the leaders as there are no elements greater to it on the right of those elements

[BruteForce sol](#) (not implemented) - iterate through all elements from L to R and check whether the all the right elements till the end is greater, if so, it is not the leader.  
<u>Time Complexity</u>: **O(n<sup>2</sup>)**  
<u>Space Complexity</u>: **O(1)**  

[Optimal Sol](./codes/optimal.cpp)   
<u>Time Complexity</u>: **O(n)**  
<u>Space Complexity</u>: **O(1)**