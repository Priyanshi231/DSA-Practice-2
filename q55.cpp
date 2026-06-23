class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }

        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);
        
        long long ans =0;

        while(dvd >= dvs){
            int sh  = 0;

            while(dvd >= (dvs << (sh + 1))){
                sh++;
            }

            ans += 1LL << sh;
            dvd -= dvs << sh;
        }
        if((dividend < 0) ^ (divisor < 0)){
            ans = -ans;
        }
        return (int) ans;
    }
};
