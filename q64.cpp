class Solution{
    public:
        vector<vector<int>> primeFactors(vector<int>& queries){
            //your code goes here
            
            vector<vector<int>> ans;

            for(int i=0; i<queries.size(); i++){
                vector<int> arr;
                int n = queries[i];

                for(int i = 2; i*i <= n; i++){
                    while(n%i == 0){
                        arr.push_back(i);
                        n = n/i;
                    }
                }

                if(n > 1) {
                    arr.push_back(n);
                }
                ans.push_back(arr);
            }

            return ans;
        }
};
