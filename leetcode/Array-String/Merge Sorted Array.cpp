class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i = m , p = 0 ; p < n ; i++){
            nums1[i] = nums2[p];
            p++;
       }
       sort(nums1.begin() , nums1.end());
    }
};