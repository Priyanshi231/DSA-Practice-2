class Solution {
public:
    string prefixToPostfix(const string& s) {
        // Your code goes here
        stack<string> st;

        for(int i=s.size()-1; i>=0; i--){
            if(isalnum(s[i])){
                st.push(string(1,s[i]));
            }
            else{
               string t1 = st.top();
               st.pop();
               string t2 = st.top();
               st.pop();

               st.push(t1 + t2 + string(1,s[i]));
            }
        }
        return st.top();
    }
};
