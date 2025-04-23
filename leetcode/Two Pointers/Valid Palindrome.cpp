class Solution {
public:
    bool isPalindrome(string s) {
        string x;

        for(auto c : s){
            char lowerCh = tolower(c);
            if((lowerCh <= 'z' && lowerCh >= 'a') || isdigit(lowerCh)) x+=lowerCh;
        }

        int l = 0 , r = x.size() - 1;
        while(l < r){
            if(x[l] != x[r]) return 0;
            l++;
            r--;
        }
        return 1;

    }
};