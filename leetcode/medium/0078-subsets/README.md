# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

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
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.8 MB (beats 92.22%)  
**Submitted:** 2026-11-10T05:58:59.103Z  

```cpp
class Solution {
public:
void getsubsets(vector<int> &nums, vector<int>&ans,int i ,vector<vector<int>> &allsubsets){
    if (i==nums.size()){
        allsubsets.push_back({ans});
        return;
    }
    ans.push_back(nums[i]);
    getsubsets(nums,ans,i+1,allsubsets);
    ans.pop_back();
    getsubsets(nums,ans,i+1,allsubsets);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsets;
        vector<int> ans;
        getsubsets(nums,ans,0,allsubsets);
        return allsubsets;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)