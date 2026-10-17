## Lessons learned
The easiest way to solve this challenge is to follow this algorithm:
- sort the vector in ascending order
- set the *miss* value as 1. Because if the passed vector contains only 1 element or no element at all, the smallest possible positive integer that could be missing is **1**.
- iterate through every element in the sorted vector
  - compare each element of the sorted vector against *miss*
    - if a match is found, then *increment miss*. This is done, because if a match is found, then the next possible missing positive number is *miss+1*
  - if there is no match between *miss* and any element present in the sorted vector, preserve the value of *miss*
- exit from the running loop
- return the value of *miss* to the main program loop. This is the smallest positive integer that is missing from the given vector. 

HAPPY CODING!!
