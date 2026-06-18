class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) { 
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {//opening
                st.push(s[i]);
            }
            else {//closing
                if(st.size()==0) return false; //closing bracket > opening bracket
                if((s[i] == ')' && st.top() == '(') ||
                   (s[i] == '}' && st.top() == '{') ||
                   (s[i] == ']' && st.top() == '[')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty(); // opening bracket>closing bracket
    }
};
