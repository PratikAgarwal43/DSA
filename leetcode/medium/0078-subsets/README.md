# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 34.24%)  
**Memory:** 10 MB (beats 51.59%)  
**Submitted:** 2026-11-26T08:21:32.336Z  

```cpp
class Solution {
public:
    void helper(vector<int>& nums, int i, vector<vector<int>>& ans,
                vector<int>& vect) {
        if (i == nums.size()) {
            ans.push_back(vect);
            return;
        }
        vect.push_back(nums[i]);
        helper(nums, i + 1, ans, vect);
        vect.pop_back();
        helper(nums, i + 1, ans, vect);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vect;
        helper(nums, 0, ans, vect);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)