class Solution {
public:

    struct item {
        int value;
        int weight;
        double ratio;
    };

    double fractionalKnapsack(vector<long long>& val, vector<long long>& wt, long long capacity) {
        // Your code goes here

        int n = val.size();

        vector<item> its;

        for(int i=0; i<n; i++){
            its.push_back({
                val[i],
                wt[i],
                (double)val[i]/wt[i]
            });
        }

        sort(its.begin(), its.end(), [](item &a, item &b){
            return a.ratio > b.ratio;
        });

        double ans = 0.0;

        for(auto &it : its){
            if(it.weight<= capacity){
                ans += it.value;
                capacity -= it.weight;
            }
            else{
                ans += it.ratio * capacity;
                break;
            }
        }
        return ans;
    }
};
