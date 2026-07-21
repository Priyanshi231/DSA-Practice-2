class Solution {
public:
    vector<vector<int>> generate(int nrows) {
        vector<vector<int>> ans;
   
        if(nrows == 1){
            ans.push_back({1});
            return ans;
        }

        ans.push_back({1});

        for(int i=1; i<nrows; i++){
            vector<int> arr(i+1);

            arr[0] = 1;
            arr[i] = 1;

            for(int j=1; j<i; j++){
                arr[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(arr);
        }

        return ans;
    }
};
