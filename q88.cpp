class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n = arr.size();

        stack<int> st;

        for(int x : arr){

            bool alive = true;
            
            while(alive && !st.empty() && st.top() > 0 && x < 0 ){
                if(st.top() < -x){
                    st.pop();
                }
                else if(st.top () == -x){
                    st.pop();
                    alive =  false;
                }
                else{
                    alive =  false;
                }
            }
            
            if(alive == true){
                st.push(x);
            }
        }

        vector<int> ans(st.size());

        for(int i=st.size()-1; i>=0; i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
