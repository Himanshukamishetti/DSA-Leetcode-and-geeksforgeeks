//1404. Number of Steps to Reduce a Number in Binary Representation to One
class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;

        // Traverse from right to left (excluding first bit)
        for(int i = s.size() - 1; i > 0; i--) {
            int bit = (s[i] - '0') + carry;

            if(bit == 1) {
                // odd -> add 1 and divide
                steps += 2;
                carry = 1;
            } 
            else {
                // even -> divide
                steps += 1;
            }
        }

        // If carry remains
        return steps + carry;
    }
};