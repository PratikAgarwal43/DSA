class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        int i = left, j = mid + 1, k = 0;
        int n = right - left + 1;
        vector<int> temp(n);
        
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        while (i <= mid) {
            temp[k++] = nums[i++];
        }
        while (j <= right) {
            temp[k++] = nums[j++];
        }
        for (int l = 0; l < temp.size(); l++) {
            nums[left + l] = temp[l];
        }
    }

    int countPair(vector<int>& nums, int left, int mid, int right) {
        int j = mid + 1;
        int cnt = 0;
        for (int i = left; i <= mid; i++) {
            while (j <= right && nums[i] > (2LL * nums[j])) {
                j++;
            }
            cnt += (j - (mid + 1));
        }
        return cnt;
    }

    int divide(vector<int>& nums, int left, int right) {
        if (left >= right)
            return 0;
        int mid = left + (right - left) / 2;
        int cnt = 0;
        cnt += divide(nums, left, mid);
        cnt += divide(nums, mid + 1, right);
        cnt += countPair(nums, left, mid, right);
        merge(nums, left, mid, right);
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        if (nums.empty()) return 0;
        return divide(nums, 0, nums.size() - 1);
    }
};