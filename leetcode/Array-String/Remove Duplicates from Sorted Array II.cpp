class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        
        int l = 0, r = 1;
        
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[r] || nums[l] != nums[r]) {
                nums[++r] = nums[i];
                l = r - 1;
            }
        }
        
        return r + 1;
    }
};