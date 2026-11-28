class Solution {
public:
    void helper(int left, int right, int& cur, int i, int n, int k) {
        if (i > n)
            return;
        int mid = left + (right - left) / 2;
        if (k <= mid)
            right = mid;
        else
            left = mid + 1;
        if (k > mid) {
            if (cur == 0)
                cur = 1;
            else
                cur = 0;
        }
        helper(left, right, cur, i+1,n,k);
    }
    int kthGrammar(int n, int k) {
        int left = 1, right = pow(2, n - 1);
        int cur = 0;
        helper(left, right, cur, 1, n, k);

        return cur;
    }
};