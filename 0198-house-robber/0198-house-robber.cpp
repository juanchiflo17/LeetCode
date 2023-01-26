class Solution {
public:
    int rob(vector<int>& nums) {
        
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        int r1 = nums[0], r2 = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++) {
            if (r1 + nums[i] > r2) {
                int temp = r2;
                r2 = r1 + nums[i];
                r1 = temp;
            }
            else {
                r1 = r2;
            }
        }
        return r2;
    }
};