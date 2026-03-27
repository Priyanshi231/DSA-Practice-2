class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> c(26,0);
        int l=0;
        int mf  =0;
        int ans =0;

        for(int r=0; r<s.size();r++){
            c[s[r]-'A']++;

            mf = max(mf,c[s[r]-'A']);
            if((r-l+1)-mf > k){
                c[s[l]-'A']--;
                l++;
            }

            ans =  max(ans,r-l+1);
        }
        return ans;
    
    }
};
