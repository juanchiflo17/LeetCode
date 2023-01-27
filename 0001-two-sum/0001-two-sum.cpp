class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            auto comp = map.find(target - nums[i]);
            if (comp != map.end()) {
                vector<int> sol;
                sol.push_back(i);
                sol.push_back(comp->second);
                return sol;
            }
            map.insert(pair<int, int>(nums[i], i));
        }
        return nums;
    }
};