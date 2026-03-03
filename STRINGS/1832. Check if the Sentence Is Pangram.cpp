class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> freq(26,false);
        for(char ch:sentence) freq[ch-'a']=1;

        for(int i=0;i<26;i++){
            if(freq[i]==0) return false;
        
        }
        return true;
    }
};