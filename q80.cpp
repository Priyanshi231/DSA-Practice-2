class Solution {
public:
    string postToPre(string post) {
        // Your code goes here
        stack<string>st;

        for(int i=0; i<post.size(); i++){
            if(isalnum(post[i])){
                st.push(string(1,post[i]));
            }
            else{
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();

                st.push(string(1,post[i]) + t2 + t1);
            }
        }
        return st.top();
    }
};
