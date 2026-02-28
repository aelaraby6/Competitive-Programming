class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1, ans = 0;

        while (l < r) {
            int h = min(height[l], height[r]);
            ans = max(ans, (r - l) * h);

            if (height[l] < height[r]) l++;
            else r --;
        }

         return ans;
    }
}
;