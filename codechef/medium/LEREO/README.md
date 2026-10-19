# LEREO

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Learning Resource Optimization

An online learning platform offers $N$ courses (numbered from $1$ to $N$) and $M$ learning bundles (numbered from $1$ to $M$).

Each course $i$ has a learning value $v_i$, an individual purchase price $p_i$, and belongs to a bundle $a_i$. Each bundle $j$ has a purchase price $b_j$.

Purchasing a bundle provides access to all courses belonging to that bundle. You can also purchase courses individually.

Given a budget of $P$, determine the  **maximum total learning value**  of the distinct courses you can purchase, either individually or through learning bundles. The total learning value is the sum of the learning values of all distinct purchased courses.

### Input Format
- The first line contains three space-separated integers $N$, $M$, and $P$.
- The next $N$ lines each contain three space-separated integers $a_i$, $p_i$, and $v_i$, representing the bundle number, individual purchase price, and learning value of the $i$-th course.
- The last line contains $M$ space-separated integers $b_1, b_2, \ldots, b_M$, representing the purchase prices of the learning bundles.
### Output Format

Print a single integer representing the maximum total learning value obtainable within the given budget.

### Constraints
- $1 \le N, M, P \le 1000$
- $1 \le a_i \le M$
- $1 \le p_i \le P$
- $1 \le b_j \le P$
- $1 \le v_i \le 10^6$
### Sample 1:
Input
Output

```
6 3 21
1 5 4
2 8 7
1 6 5
3 4 3
2 7 6
3 9 8
9 12 10
```

```
22
```

### Explanation:

There are $6$ courses, $3$ learning bundles, and a budget of $21$.

- Bundle $1$ contains courses $1$ and $3$, with a total learning value of $4 + 5 = 9$ and a price of $9$.
- Bundle $2$ contains courses $2$ and $5$, with a total learning value of $7 + 6 = 13$ and a price of $12$.
- Bundle $3$ contains courses $4$ and $6$, with a total learning value of $3 + 8 = 11$ and a price of $10$.

An optimal strategy is to purchase bundle $1$ and bundle $2$.

The total cost is $9 + 12 = 21$, which is within the available budget.

The total learning value is $9 + 13 = 22$, which is the maximum possible.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T15:19:05.537Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LEREO)