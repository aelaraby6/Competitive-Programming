class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.size()>0){
            if(s[i]==')'){
                if(st.top()=='(') st.pop();
                 else return 0;
            }

            else if(s[i]=='}'){
                if(st.top()=='{') st.pop();
                 else return 0;
            }
            else if(s[i]==']') {
                if(st.top()=='[') st.pop();
                 else return 0;
            }
            }
            else{
                return 0;
            }
        }

       }
       if(st.size()==0) return 1;
       else return 0;
      
    }
};