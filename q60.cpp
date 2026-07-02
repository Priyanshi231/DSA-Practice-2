class Solution{	
	public:		
		vector<int> singleNumber(vector<int>& nums){
			//your code goes here
            int xr = 0;
            for(int i=0; i<nums.size(); i++){
                xr ^= nums[i];
            }
            int mask = xr ^ (-xr);
            int x =0, y= 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] & mask){
                    x ^= nums[i];
                }
                else{
                    y ^= nums[i];
                }
            }
            if(x > y){
                swap(x,y);
            }

            return {x,y};
		}

};
