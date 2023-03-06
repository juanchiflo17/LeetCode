class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l = 0, r = nums.size() - 1;
        int m; 
        int sol = nums[0];
        
        while (l <= r) {
            
            if (nums[l] < nums[r]) {
                sol = min(nums[l], sol);
                break;
            }
            
            m = (l + r) / 2;
            sol = min(sol, nums[m]);
            if (nums[m] >= nums[l]) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        return sol;
    }
};