# Letter Case Permutation

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, you can transform every letter individually to be lowercase or uppercase to create another string.

Return  *a list of all possible strings we could create*. Return the output in  **any order**.

 

 **Example 1:** 

```
Input: s = "a1b2"
Output: ["a1b2","a1B2","A1b2","A1B2"]

```

 **Example 2:** 

```
Input: s = "3z4"
Output: ["3z4","3Z4"]

```

 

 **Constraints:** 

- 1 <= s.length <= 12
- s consists of lowercase English letters, uppercase English letters, and digits.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 70.82%)  
**Memory:** 12.6 MB (beats 76.10%)  
**Submitted:** 2026-11-10T06:05:57.553Z  

```cpp
class Solution {
private:
    void backtrack(string& s, int index, vector<string>& result) {
        if (index == s.size()) {
            result.push_back(s);
            return;
        }
        if (isalpha(s[index])) {
            s[index] = tolower(s[index]);
            backtrack(s, index + 1, result);
            s[index] = toupper(s[index]);
            backtrack(s, index + 1, result);
        } else {
            backtrack(s, index + 1, result);
        }
    }

public:
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        backtrack(s, 0, result);
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/letter-case-permutation/)