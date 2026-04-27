class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy = nums[0];
        int p = 0;

        for(int i=0; i<nums.size(); i++){
            if(buy > nums[i]){
                buy = nums[i];
            }

            p = max(p, nums[i] - buy);
        }
        return p;
    }
};
