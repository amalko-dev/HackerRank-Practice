## Lessons Learnt:
1. Pay attention and identify that we **DO NOT** need to store the historical averages to get back to in the later iterations. Rather, **sum** needs to be updated in every iteration. 
2. Pay attention to the order in which the update of **sum** is to be done in regards to the Check of the condition (i.e., Current element > Previous averages) ==> the sum should be updated **ONLY AFTER** the condition check is evaluated!!

## Common pitfalls that may result in failing of the hidden test cases:
Pay attention to the assigned datatypes for *sum* and *avg*. Check the constraints mentioned in the problem description:
```txt
Constraints
0 <= responseTimes.length <= 1000
1 <= responseTimes[i] <= 10^9 for 0 <= i < responseTimes.length
```
==> since the max value of length is under 1000, storing the size of the vector to **int** type is more than sufficient. But the little trickier part is with the running *sum* and *avg*. Here, the constraint specifically mentions that the elements can have any non-negative value less than 10^9. The *int* type therefore is not sufficient to hold these values and will result in arithmetic overflows ==> assign larger datatypes such as *int64_t* for sum and avg

HAPPY CODING !!
