class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int maxlen = 0;
        int zc = 0;
        
        for(int right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                zc++;
            }
            while(zc > k){
                if(nums[left] == 0){
                    zc--;
                }
                left++;
            }
            maxlen = max(maxlen, right-left+1);
        }
        return maxlen;
    }
};t