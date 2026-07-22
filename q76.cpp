//more time complexity

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> mp;

        vector<int>ans;

        for(int i=0; i<n; i++){
           mp[nums[i]]++;            
        }

        for(auto it : mp){
            if(it.second > n/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};



//Boyer-Moore algorithm

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int cand1 = 0, cand2 = 1;
        int c1 = 0, c2=0;;

        for(int num : nums){
            if(num == cand1){
                c1++;
            }
            else if(num == cand2){
                c2++;
            }
            else if(c1 == 0){
                cand1 = num;
                c1 = 1;
            }
            else if(c2 == 0){
                cand2 = num;
                c2 = 1;
            }
            else{
                c1--;
                c2--;
            }
        }

        c1 = 0;
        c2 = 0;

        for(int num : nums){
            if(num == cand1){
                c1++;
            }
            else if(num == cand2){
                c2++;
            }           
        }

        vector<int> ans;

        if(c1 > n/3){
            ans.push_back(cand1);
        }
        if(c2 > n/3){
            ans.push_back(cand2);
        }

        return ans;
    }
};
