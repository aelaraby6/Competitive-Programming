class Solution {
public:
    bool isAnagram(string s, string t) {
        // o(n log(n))
        //    sort(s.begin(),s.end());
        //    sort(t.begin(),t.end());
        //     return t == s;

        
        // o(n)
        // int size1 = s.size(), size2 = t.size();

        // if (size1 != size2)
        //     return false;

        // int arr[27] = {0};

        // for (int i = 0; i < size1; i++) {
        //     arr[s[i] - 97]++;
        //     arr[t[i] - 97]--;
        // }

        // for (int i = 0; i < 27; i++) {
        //     if (arr[i] != 0)
        //         return false;
        // }

        // return true;
    }
};
