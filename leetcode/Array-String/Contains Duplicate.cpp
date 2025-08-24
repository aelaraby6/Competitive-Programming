class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (int num : nums) {
            seen[num]++;
            if (seen[num] > 1)
                return true;
        }
        return false;
    }
};