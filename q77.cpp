class Solution {
public:
    string postToInfix(string postExp) {
        // Your code goes here
        stack<string> st;
        int i=0;

        while(i < postExp.size()){
            if( isalnum (postExp[i])){
                st.push(string(1,postExp[i]));
            }
            else {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();

                string str = "(" + t2 + postExp[i] + t1 + ")";
                st.push(str);
            }
            i++;
        }
        return st.top();
    }
};
