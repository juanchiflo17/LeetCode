class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        while (true) {
            if (numbers[l] + numbers[r] == target) {
                vector<int> sol = {l+1, r+1};
                return sol;
            }
            if (numbers[l] + numbers[r] > target) {
                r--;
            }
            else if (numbers[l] + numbers[r] < target) {
                l++;
            }
        }
        return numbers;
    }
};