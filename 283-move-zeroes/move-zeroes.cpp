class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 1;

        for (int i = 0; i < n; i++) {
            int left = i;

            for (int j = i + 1; j < n; j++) {
                int right = j;

                if (nums[left] == 0) {
                    if (nums[right] != 0) {
                        swap(nums[left], nums[right]);
                        left++;
                    }
                }
                else {
                    left++;
                }
            }
        }
    }
};