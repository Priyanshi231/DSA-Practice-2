class Solution {
public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &ind) {
        // Your code goes here
        int n = arr.size();
        int n2 = ind.size();

        vector<int> ans;
        
        for(int i=0; i<n2; i++){
            int vi = ind[i];
            int va = arr[vi];
            int c = 0;
            for(int j=vi+1; j<n; j++){
                if(va < arr[j]){
                    c++;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};
