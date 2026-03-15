class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n - 2; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;

        int l = i + 1, r = n - 1;
        while(l < r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum == 0){
                res.push_back({nums[i], nums[l], nums[r]});
                int leftVal = nums[l], rightVal = nums[r];

                while(l < r && nums[l] == leftVal) l++;
                while(l < r && nums[r] == rightVal) r--;
            } else if(sum < 0){
                l++;
            } else {
                r--;
            }
        }
    }
    return res;
}

};