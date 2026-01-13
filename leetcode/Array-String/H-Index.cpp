class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin() , citations.end());

        int maxx = 0 , n = citations.size();

        for(int i = 0 ; i< n ;i++){
            int cur = min(citations[i] , n - i);

            maxx = max(maxx , cur);
        }

        return maxx;
    }
};