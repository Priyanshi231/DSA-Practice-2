class Solution {
public:
    int atmost(vector<int>& nums, int goal){
        if(goal < 0) return 0;
        int l=0, sum=0, c=0;

        for(int r=0; r<nums.size(); r++){
            sum += nums[r];

            while(sum > goal){
                sum -= nums[l];
                l++;
            }

            c += r-l+1;
        }
        return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = atmost(nums,goal)-atmost(nums,goal-1);
        return count;
    }
};