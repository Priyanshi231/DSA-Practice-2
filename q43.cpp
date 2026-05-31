class Solution {
  public:

    void sol (int i, vector<int>& nums, int sum , vector<int>& ans){

        if( i == nums.size()){
            ans.push_back(sum);
            return;
        }

        sol (i+1, nums, sum + nums[i], ans);

        sol (i+1, nums, sum, ans);
    }


    vector<int> subsetSums(vector<int>& nums) {
        //your code goes here
        vector<int> ans;
        sol(0,nums,0,ans);
        return ans;
    }
};
