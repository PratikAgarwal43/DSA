class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> PrefixXOR(n, 0);
        PrefixXOR[0] = arr[0];
        for (int i = 1; i < n; i++) {
            PrefixXOR[i] = PrefixXOR[i - 1] ^ arr[i];
        }
        vector<int> res;
        for (auto i : queries) {
            int R = i[1];
            int L = i[0];
            int xorVal = PrefixXOR[R] ^ (L == 0 ? 0 : PrefixXOR[L - 1]);
            res.push_back(xorVal);
        }
        return res;
    }
};