class Solution {
public:

    void sol(int i, vector<int>& nums, vector<int> arr, vector<vector<int>>& ans){
        if(i == nums.size()){
            ans.push_back(arr);
            return;
        }

        arr.push_back(nums[i]);
        sol (i+1,nums, arr, ans);
        arr.pop_back();

        while(i+1<nums.size() && nums[i] == nums[i+1]){
            i++;
        }

        sol (i+1,nums, arr, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> arr;

        sol(0, nums, arr, ans);

        return ans;
    }
};
