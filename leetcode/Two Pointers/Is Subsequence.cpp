class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int  l = 0,r = 0,count = 0;
            while(r < t.size()){   
                if(s[l] == t[r]){
                    count++;
                    l++;
                    r++;
                }
                else{
                    r++;
                }
            }
            if(count == s.size()) return true;
            return false;
        }
    };