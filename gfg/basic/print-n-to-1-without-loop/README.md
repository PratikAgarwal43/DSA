# Print n to 1 Without Loop

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer  **n**, print all numbers from n to 1 in decreasing order, separated by spaces, without using any loops.

 **Examples :** 

```
Input: n = 5
Output: 5 4 3 2 1
Explanation: The numbers from 5 to 1 are printed in decreasing order.
```

```
Input: n = 3
Output: 3 2 1
Explanation: The numbers from 3 to 1 are printed in decreasing order
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-10T05:57:12.489Z  

```cpp
class Solution {
  public:
    void printNos(int n) {
        // code here
        if (n<=0){
            return;
        }
        cout << n << " ";
        printNos(n-1);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/print-n-to-1-without-loop/1)