class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c = 0, ans = 0;
        for(int i =0 ;i<n; i++){
            if(nums[i] == 1){
                c++;
                ans = max(ans, c);
            }else{
                c = 0;
            }
        }
        return ans;
    }
};
