class Solution {
public:

    void sol(int i, string curr, string digits, vector<string> &ans, vector<string> &mp){
        if(i == digits.size()){
            ans.push_back(curr);
            return;
        }

        string letters = mp[digits[i] - '0'];

        for(char ch : letters){
            sol (i+1, curr + ch, digits, ans, mp);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> ans;

        vector<string> mp = {
            "","","abc","def",
            "ghi","jkl","mno",
            "pqrs","tuv","wxyz"
        };

        sol (0,"", digits, ans, mp);
        return ans;

    }
};
