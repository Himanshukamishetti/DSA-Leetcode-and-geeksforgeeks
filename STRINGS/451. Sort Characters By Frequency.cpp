class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(auto ch:s) freq[ch]++;

        vector<vector<char>> bucketdata(s.length()+1);
        for(auto [ch,fq] : freq) bucketdata[fq].push_back(ch);

        string ans="";
        for(int fq=s.length();fq>=1;fq--){
            for(auto ch : bucketdata[fq])
            ans.append(fq,ch);
        }
        return ans;
    }
};