class Solution {
public:
    int minAddToMakeValid(string s) {

        int balance = 0;   // open brackets
        int add = 0;       // needed brackets

        for (char c : s) {
            if (c == '(') {
                balance++;
            } else { // ')'
                if (balance > 0) {
                    balance--;
                } else {
                    add++; // need one '('
                }
            }
        }

        return add + balance;
    }
};

