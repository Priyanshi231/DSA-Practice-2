class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
        int maxlen = 0;

        for(int r=0; r<s.length(); r++){
            while(st.find(s[r]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[r]);
            maxlen = max(maxlen, r-left+1);
        }
        return maxlen;
    }
};
