class Solution {
public:
    int priority (char ch){
        if(ch == '^'){
            return 3;
        }
        else if(ch == '*' || ch =='/'){
            return 2;
        }
        else if(ch == '+' || ch =='-'){
            return 1;
        }
        return -1;
    }
    string infixToPrefix(const string& str) {
        // Your code goes here
        string s = str;
        
        reverse(s.begin(),s.end());

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(')
                s[i] = ')';

            else if(s[i] == ')')
                s[i] = '(';
        }

        stack<char> st;
        string ans;

        for(char ch : s){
            if(isalnum(ch)){
                ans += ch;
            }
            else if(ch == '('){
                st.push(ch);
            }
            else if(ch == ')'){
                while(!st.empty() && st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                if(ch == '^'){
                    while(!st.empty() && 
                    st.top() != '(' && 
                    priority(st.top()) >= priority(ch) ) {
                        ans += st.top();
                        st.pop();
                    }
                }
                else{
                    while(!st.empty() && 
                    st.top() != '(' && 
                    priority(st.top()) > priority(ch)){
                        ans += st.top();
                        st.pop();
                    }
                }
                st.push(ch);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
