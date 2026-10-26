# Add Two Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two  **non-empty**  linked lists representing two non-negative integers. The digits are stored in  **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

 **Example 1:** 

```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

```

 **Example 2:** 

```
Input: l1 = [0], l2 = [0]
Output: [0]

```

 **Example 3:** 

```
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

```

 

 **Constraints:** 

- The number of nodes in each linked list is in the range [1, 100].
- 0 <= Node.val <= 9
- It is guaranteed that the list represents a number that does not have leading zeros.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 21.74%)  
**Memory:** 76.9 MB (beats 91.62%)  
**Submitted:** 2026-10-26T08:11:54.069Z  

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* cur = new ListNode(-1);
        ListNode* ans = cur;
        int carry = 0;
        while (temp1 || temp2) {
            int sum = carry;
            if (temp1)
                sum += temp1->val;
            if (temp2)
                sum += temp2->val;
            cur->next = new ListNode(sum % 10);
            carry = sum / 10;
            if (temp1)
                temp1 = temp1->next;
            if (temp2)
                temp2 = temp2->next;
            cur = cur->next;
        }
        if (carry)
            cur->next = new ListNode(carry);
        return ans->next;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/add-two-numbers/)