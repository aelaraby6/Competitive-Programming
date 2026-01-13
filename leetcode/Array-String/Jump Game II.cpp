class Solution {
public:
    int jump(vector<int>& nums) {
        int maxx = 0, maxx_idx = 0, count = 0;
        int n = nums.size(), p = nums[0];

        if (n == 1) return 0;
        if (n == 2) return 1;
        if (nums[0] >= n - 1) return 1;

        for (int i = 1; i < n; i++) {
            p--;

            if (i + nums[i] > maxx) {
                maxx = i + nums[i];
                maxx_idx = i;
            }

            if (p == 0 && i < n - 1) {
                count++;
                p = nums[maxx_idx];
                maxx = 0;
            }
        }
        return count + 1; 
    }
};
