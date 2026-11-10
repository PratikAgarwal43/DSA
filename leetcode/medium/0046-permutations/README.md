# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.4 MB (beats 95.23%)  
**Submitted:** 2026-11-10T06:20:09.009Z  

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        
    
        sort(nums.begin(), nums.end());
        
    
        do {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)