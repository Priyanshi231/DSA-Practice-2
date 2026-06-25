class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num = start^goal;
        int ans = 0;
        while(num){
            if(num & 1){
                ans++;
            }
            num = num >> 1;
        }
        return ans;
    }
};
