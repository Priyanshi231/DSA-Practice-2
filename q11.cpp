class Solution {
public:
    int atmost (vector<int>& nums, int k){
        int n = nums.size();
        int l=0, odd=0 , c=0;
        for(int i=0; i<n; i++){
            if(nums[i] %2 != 0){
                odd++;
            }
            while(odd > k){
                if(nums[l]%2 != 0){
                    odd--;
                } 
                l++;
            }
            c += i-l+1;
        }
        return c;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {        
        return atmost(nums,k) - atmost(nums,k-1);
    }
};