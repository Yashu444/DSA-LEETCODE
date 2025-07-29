class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        if (n == 1)
            return 1;

        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                ans.push_back(nums[i]);
                break;
            }
            if (nums[i] != nums[i + 1]) {
                ans.push_back(nums[i]);
            }
        }

        nums = ans;
        return ans.size();
    }
};