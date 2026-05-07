# Array Transformation Cost Minimization

## Problem Statement
Given an integer array `A` of size `N` and an integer `K`, you can perform the following operation any number of times:

- Choose any index `i`
- Replace:
  - `A[i]` with `A[i] + K`
  - or `A[i]` with `A[i] - K`

The goal is to make all array elements equal using the minimum number of operations.

If it is impossible, print `-1`.

---

## Approach
- First, check if transformation is possible.
- For all elements, the difference between them must be divisible by `K`.
- Sort the array and choose the median element as the target.
- Calculate the total operations required to convert every element into the median.

---

## Time Complexity
```txt
O(N log N)