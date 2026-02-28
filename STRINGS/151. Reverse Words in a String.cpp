class Solution {
public:
    string reverseWords(string s) {
        stringstream sec(s);
        string word;
        vector<string> temp;
        string ans = "";
        while(sec >> word){
            temp.push_back(word);
        }
        for(int i=temp.size()-1;i>=0;i--){
            if(i!=0){
                ans+=temp[i]+" ";
            }
             else
            ans+=temp[i];
        }
        return ans;
    }
};