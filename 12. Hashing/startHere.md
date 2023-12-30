# Hashing

- count ints
  - [using array](./codes/countInts.cpp)
  - [using map/unordered_map](./codes/countIntsUsingMap.cpp)
- count chars
  - [using array](./codes/countChars.cpp)
  - [using map/unordered_map](./codes/countCharsUsingMap.cpp)

## Time Complexity

| DS            | Best    | Average | Worst   |
| ------------- | ------- | ------- | ------- |
| map           | O(logN) | O(logN) | O(logN) |
| unordered_map | O(1)    | O(1)    | O(N)    |

> NOTE: unordered_map's key is only restricted to some datastructures.
> Internally it uses some implementation like 'division method' to store the hash key, value. Division method stores the modulo to 10 and links the same remainder values in a linked list in sorted way. So the Worst case is O(N) when all the values are producing same remainder when divided by 10
