class Solution {
public:
    bool checkIthBit(int n, int i) {
        // Your code goes here
        if(n & (1 << i)){
             return true;
        }
        return false;
       
    }
};
