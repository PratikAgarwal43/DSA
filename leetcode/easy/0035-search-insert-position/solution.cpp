class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n, mid;
        while (low < high) {
            mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else if (nums[mid] > target)
                high = mid;
        }
        return low;
    }
};