class Solution {
public:
    int kthGrammar(int n, int k) {
        int left = 1, right = pow(2, n - 1);
        int cur = 0;
        for (int i = 1; i <= n; i++) {
            int mid = left + (right - left) / 2;
            if (k <= mid)
                right = mid;
            else
                left = mid+1;
            if (k > mid) {
                if (cur == 0)
                    cur = 1;
                else
                    cur = 0;
            }
        }
        return cur;
    }
};