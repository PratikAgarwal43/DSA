# WOGUE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Word Guess

Chef is playing a word-guessing game. You are given the hidden word $S$ and Chef's guess $R$, both consisting of exactly $5$ uppercase English letters.

Create a string $M$ of length $5$. For each position $i$:

- Set $M_i$ to G if $S_i = R_i$.
- Otherwise, set $M_i$ to B.

Only letters at the same position are compared. Print the resulting string $M$.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- For each test case: The first line contains the hidden word $S$. The second line contains the guess $R$.
### Output Format

For each test case, print the value of string $M$.

You may print each character of the string in uppercase or lowercase (for example, the strings $\texttt{BgBgB}$, $\texttt{BGBGB}$, $\texttt{bgbGB}$ and $\texttt{bgbgb}$ will all be treated as identical).

### Constraints
- $1 \leq T \leq 1000$
- $|S| = |R| = 5$
- $S, R$ contain uppercase english alphabets only.
### Sample 1:
Input
Output

```
3
STONE
SHINE
CRANE
GRAPE
LIGHT
NIGHT
```

```
GBBGG
BGGBG
BGGGG
```

### Explanation:
- Test case 1: The letters match at positions $1$, $4$, and $5$, giving GBBGG.
- Test case 2: The letters match at positions $2$, $3$, and $5$, giving BGGBG.
- Test case 3: The letters match at positions $2$, $3$, $4$, and $5$, giving BGGGG.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-16T14:27:50.602Z  

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
        
        string s,r,res="";
        cin >> s >> r;
        for (int i= 0; i<5; i++){
            if (s[i]==r[i]) res+='G';
            else res+='B';
        }
        cout << res << '\n';
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/WOGUE)