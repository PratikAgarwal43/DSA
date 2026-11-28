# K-th Symbol in Grammar

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

We build a table of `n` rows (**1-indexed**). We start by writing `0` in the `1st` row. Now in every subsequent row, we look at the previous row and replace each occurrence of `0` with `01`, and each occurrence of `1` with `10`.

- For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.

Given two integer `n` and `k`, return the `kth` (**1-indexed**) symbol in the `nth` row of a table of `n` rows.

 

Original
C++
 **Example 1:** 

```
Input: n = 1, k = 1
Output: 0
Explanation: row 1: 0

```

 **Example 2:** 

```
Input: n = 2, k = 1
Output: 0
Explanation: 
row 1: 0
row 2: 01

```

 **Example 3:** 

```
Input: n = 2, k = 2
Output: 1
Explanation: 
row 1: 0
row 2: 01

```

 

 **Constraints:** 

- 1 <= n <= 30
- 1 <= k <= 2n - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8 MB (beats 11.23%)  
**Submitted:** 2026-11-28T08:43:01.261Z  

```cpp
class Solution {
public:
    void helper(int left, int right, int& cur, int i, int n, int k) {
        if (i > n)
            return;
        int mid = left + (right - left) / 2;
        if (k <= mid)
            right = mid;
        else
            left = mid + 1;
        if (k > mid) {
            if (cur == 0)
                cur = 1;
            else
                cur = 0;
        }
        helper(left, right, cur, i+1,n,k);
    }
    int kthGrammar(int n, int k) {
        int left = 1, right = pow(2, n - 1);
        int cur = 0;
        helper(left, right, cur, 1, n, k);

        return cur;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/k-th-symbol-in-grammar/)