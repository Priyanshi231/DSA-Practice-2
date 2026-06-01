class Solution {
public:

    void sol(int st,int k, int n, vector<vector<int>>& ans, vector<int>& arr ){
        if(n == 0 && arr.size() == k){
            ans.push_back(arr);
            return;
        }

        if(n < 0 || arr.size() > k){
            return;
        }
       
        for(int i=st; i<=9; i++){
            arr.push_back(i);

            sol(i+1,k, n-i, ans, arr);

            arr.pop_back();

        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;

        sol(1,k, n, ans, arr);

        return ans;

    }
};
