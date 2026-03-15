class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, summ = 0, minn = INT_MAX;

        while (r < nums.size()) {
            summ+=nums[r];


            while (summ >= target) {
                minn = min(minn, r - l + 1);
                summ-=nums[l];
                l++;
            } 

            r++;
        }

        return minn == INT_MAX ? 0 : minn;
    }
};