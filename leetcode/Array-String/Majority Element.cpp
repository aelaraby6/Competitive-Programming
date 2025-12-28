class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int res = 0;
        for (auto x : nums) {
            mp[x]++; // time o(log n)
            if (mp[x] > (nums.size()) / 2)
                res = x;
        }

        return res;

        //  Boyer–Moore Voting Algorithm
        // int candidate = 0;
        // int count = 0;

        // for (int x : nums) {
        //     if (count == 0) {
        //         candidate = x;
        //     }
        //     count += (x == candidate) ? 1 : -1;
        // }

        // return candidate;
    }
};