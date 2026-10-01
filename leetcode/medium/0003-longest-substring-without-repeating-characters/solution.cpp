class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> seen;
        int left = 0;
        int maxLen = INT_MIN;
        for (int i = 0; i < n; i++) {
            while (seen.find(s[i]) != seen.end()) {
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[i]);
            maxLen = max(maxLen, i - left + 1);
        }
        return maxLen != INT_MIN ? maxLen : 0;
    }
};