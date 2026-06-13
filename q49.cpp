class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int srow = 0, erow = n-1;
        int scol = 0, ecol = m-1;

        vector<int> ans;

        while(srow <= erow && scol <= ecol){
            for(int i=scol; i<=ecol; i++){
                ans.push_back(mat[srow][i]);
            }
            for(int j=srow+1; j<=erow; j++){
                ans.push_back(mat[j][ecol]);
            }
            for(int k=ecol-1; k>=scol; k--){
                if(srow==erow){
                    break;
                }
                ans.push_back(mat[erow][k]);
            }
            for(int x=erow-1; x>=srow+1; x--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(mat[x][scol]);
            }

                srow++;
                scol++;
                erow--;
                ecol--;
        }
        return ans;
    }
};

