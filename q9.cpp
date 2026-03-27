class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        
        int n = cp.size();
        int lsum = 0, rsum = 0;
        int ans = 0;

        for(int i=0; i<k; i++){
            lsum += cp[i];
        }
        ans = lsum;
        int e = n-1; 
        for(int i=k-1; i>=0; i--){
            lsum -= cp[i];
            rsum += cp[e];
            e--;
            ans = max(ans, lsum + rsum);
        }
        return ans;
    }
};