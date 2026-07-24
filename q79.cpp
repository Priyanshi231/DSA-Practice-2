class Solution {
public:
    string prefixToInfix(string s) {
        // Your code goes here
        stack<string> st;

        for(int i=s.size()-1; i >= 0; i--){
            if(isalnum (s[i])){
                st.push(string(1,s[i]));
            }
            else{
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();

                string str = "(" + t1 + s[i] + t2 + ")";
                st.push(str);
            }
        }
        return st.top();
        
    }
};
