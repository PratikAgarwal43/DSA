class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    long long nSum = (n*(n+1))/2;
    long long Sum=0;
    for (auto i=0; i<n; i++){
        Sum+=nums[i];
    }
    return nSum - Sum;

    }
};