class Solution {
public:
    int priority(char ch){
        if(ch == '^'){
            return 3;
        }else if(ch == '*' || ch == '/'){
            return 2;
        }else if(ch=='+' || ch=='-'){
            return 1;
        }
        return -1;
    }

    string infixToPostfix(string s) {
        // Your code goes here
        string ans;
        stack<char> st;

        for(char ch : s){
            if((ch >= 'A' && ch <= 'Z') || 
                (ch >= 'a' && ch <= 'z') || 
                (ch >= '0' && ch <= '9')){
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
                while(!st.empty() && st.top() != '(' &&
                    (priority(st.top()) > priority(ch) ||
                    (priority(st.top()) == priority(ch) && ch!='^') )){
                        ans += st.top();
                        st.pop();
                }
                st.push(ch);
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
