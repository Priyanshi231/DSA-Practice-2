class Solution{	
	public:
        int xorN(int n){
            if(n%4 == 0) return n;
            if(n%4 == 1) return 1;
            if(n%4 == 2) return n+1;

            return 0;
        }
		int findRangeXOR(int l,int r){
			//your code goes here
            return xorN(r) ^ xorN(l-1);
		}
};
