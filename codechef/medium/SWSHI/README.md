# SWSHI

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sweet Shopping

Chef visits a shop with $N$ sweets arranged in a row. The $i$-th sweet costs $A_i$ rupees, and Chef has $M$ rupees.

Chef can choose any starting position, but the sweets he buys must form a  **consecutive segment**  of the row. Their total cost must be  **at most $M$**. The row does not wrap around: the first sweet does not follow the last.

Find the  **maximum number of sweets**  Chef can buy. If he cannot afford any sweet, the answer is $0$.

### Input Format
- The first line contains an integer $T$ — the number of test cases.
- For each test case: The first line contains two space-separated integers $N$ and $M$. The second line contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$.
### Output Format

For each test case, print the maximum number of sweets Chef can buy on a separate line.

### Constraints
- $1 \le T \le 1000$
- $1 \le N \le 10^5$
- $1 \le M \le 10^9$
- $1 \le A_i \le 10^9$
- The sum of $N$ over all test cases does not exceed $10^5$.
### Sample 1:
Input
Output

```
2
6 8
5 2 1 3 2 6
4 5
3 3 3 3
```

```
4
1
```

### Explanation:

 **Test case 1:**  Chef can buy sweets at positions $2$ through $5$ for $2+1+3+2=8$ rupees. Both segments of length $5$ exceed his budget, so the maximum is $4$.

 **Test case 2:**  One sweet costs $3$ rupees, but any two consecutive sweets cost $6$ rupees. Therefore, Chef can buy at most $1$ sweet.

### Sample 2:
Input
Output

```
2
3 4
5 7 6
4 10
1 2 3 4
```

```
0
4
```

### Explanation:

 **Test case 1:**  Every sweet costs more than $4$ rupees, so Chef cannot buy any sweet.

 **Test case 2:**  All four sweets together cost $1+2+3+4=10$ rupees, exactly matching Chef's budget.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T14:06:41.669Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int N , M;
        vector<int> a(N);
        for(int i = 0; i< N; i++){
            cin >> a[i];
        }
        int maxLen = INT_MIN;
        int cur= 0;
        int left = 0;
        for(int i = 0; i<N; i++){
            cur+= a[i];
            while(cur > M){
                cur-=a[i];
            }
            maxLen = max(maxLen,i-left+1);
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SWSHI)