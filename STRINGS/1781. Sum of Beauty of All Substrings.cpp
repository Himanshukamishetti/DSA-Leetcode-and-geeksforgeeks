//1781. Sum of Beauty of All Substrings
class Solution {
public:
    int getmincount(vector<int> &freq){
        int mincount=INT_MAX;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                mincount = min(mincount , freq[i]);
            }
        }
        return mincount;
    }
    int getmaxcount(vector<int>&freq){
        int maxcount = 0 ;
        for(int i=0;i<26;i++){
            maxcount = max(maxcount, freq[i]);
        }
        return maxcount;
    }
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            vector<int> freq(26, 0);
            for(int j=i;j<s.length();j++){
                freq[s[j] - 'a']++;
                int beauty = getmaxcount(freq) - getmincount(freq);
                sum+=beauty;
            }
        }
        return sum;
    }
};