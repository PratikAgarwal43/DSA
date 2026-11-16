# MULTITAB

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Gift Boxes

Chef wants to prepare $X$ gift boxes. Each box must contain exactly $3$ chocolates.

Chef has $Y$ chocolates. Determine whether he has enough chocolates to prepare all $X$ boxes.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- Each test case contains two space-separated integers $X$ and $Y$ — the number of gift boxes and the number of chocolates Chef has, respectively.
### Output Format

For each test case, print `YES` if Chef has enough chocolates to prepare all $X$ boxes, or `NO` otherwise, on a separate line.

You may print the answer in any combination of uppercase and lowercase letters.

### Constraints
- $1 \le T \le 2000$
- $1 \le X \le 100$
- $0 \le Y \le 1000$
### Sample 1:
Input
Output

```
4
3 12
2 0
6 17
4 12
```

```
YES
NO
NO
YES
```

### Explanation:
- Test case 1: Chef needs $3 \times 3 = 9$ chocolates and has $12$, so he can prepare all the boxes.
- Test case 2: Chef needs $3 \times 2 = 6$ chocolates but has none.
- Test case 3: Chef needs $3 \times 6 = 18$ chocolates but has only $17$.
- Test case 4: Chef needs $3 \times 4 = 12$ chocolates and has exactly $12$, so he can prepare all the boxes.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-16T14:13:06.749Z  

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
        int x,y;
        cin >> x >> y;
        if ((3*x)<= y) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MULTITAB)