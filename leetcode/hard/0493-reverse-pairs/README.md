# Reverse Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an integer array `nums`, return  *the number of  **reverse pairs**  in the array*.

A  **reverse pair**  is a pair `(i, j)` where:

- 0 <= i < j < nums.length and
- nums[i] > 2 * nums[j].

 

 **Example 1:** 

```
Input: nums = [1,3,2,3,1]
Output: 2
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1

```

 **Example 2:** 

```
Input: nums = [2,4,3,5,1]
Output: 3
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 4, nums[4] = 1, 4 > 2 * 1
(2, 4) --> nums[2] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 5, nums[4] = 1, 5 > 2 * 1

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- -231 <= nums[i] <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 236 ms (beats 83.57%)  
**Memory:** 113.4 MB (beats 84.56%)  
**Submitted:** 2026-10-27T06:34:12.303Z  

```cpp
class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        int i = left, j = mid + 1, k = 0;
        int n = right - left + 1;
        vector<int> temp(n);
        
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        while (i <= mid) {
            temp[k++] = nums[i++];
        }
        while (j <= right) {
            temp[k++] = nums[j++];
        }
        for (int l = 0; l < temp.size(); l++) {
            nums[left + l] = temp[l];
        }
    }

    int countPair(vector<int>& nums, int left, int mid, int right) {
        int j = mid + 1;
        int cnt = 0;
        for (int i = left; i <= mid; i++) {
            while (j <= right && nums[i] > (2LL * nums[j])) {
                j++;
            }
            cnt += (j - (mid + 1));
        }
        return cnt;
    }

    int divide(vector<int>& nums, int left, int right) {
        if (left >= right)
            return 0;
        int mid = left + (right - left) / 2;
        int cnt = 0;
        cnt += divide(nums, left, mid);
        cnt += divide(nums, mid + 1, right);
        cnt += countPair(nums, left, mid, right);
        merge(nums, left, mid, right);
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        if (nums.empty()) return 0;
        return divide(nums, 0, nums.size() - 1);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-pairs/)