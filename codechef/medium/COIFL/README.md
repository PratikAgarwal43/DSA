# COIFL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Coin Flip

A coin has $1$ printed on one side and $2$ on the other. Each flip adds the number on the face-up side to a running sum, initially $0$.

Find the number of distinct sequences of flips whose sum is exactly $S$. Two sequences are different if they differ in length or in the result of at least one flip. For example, $(1, 2)$ and $(2, 1)$ are different sequences.

### Input Format

The input contains a single integer $S$, the required sum.

### Output Format

Print the number of distinct sequences of flips whose sum is exactly $S$.

### Constraints
- $1 \le S \le 20$
### Sample 1:
Input
Output

```
3
```

```
3
```

### Explanation:

To achieve a sum of 3, there are three ways:

- (1, 2)
- (2, 1)
- (1, 1, 1)
### Sample 2:
Input
Output

```
2
```

```
2
```

### Explanation:

To achieve a sum of 2, there are two ways:

- (1, 1)
- (2)

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T14:21:54.782Z  

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
    if (t == 1) {
        cout << 1 << "\n";
        return 0;
    }
    std::vector<long long>dp(t+1,0) ;
    dp[0]= 1;
    dp[1]= 1;
    for(int i =2; i<=t; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[t] << '\n';
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/COIFL)