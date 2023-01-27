class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        vector<int> sol;
        for (int j = 0; j < k; j++) {
            int max = mp.begin()->first;
            for (auto i : mp) {
                if (i.second > mp[max]) {
                    max = i.first;
                }
            }
            sol.push_back(max);
            mp[max] = -1;
        }
        return sol;
    }
};