class Solution {
public:
    string sortSentence(string s) {
        s+=" ";
        vector<string>temp(10);
        int occurence=0;
        string ans="";
        for (int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                int pos=s[i-1]-'0';
                ans.pop_back();
                temp[pos]=ans;
                ans="";
            }
            else
            ans+=s[i];
        }
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i].empty()) break;
            ans+=temp[i]+" ";
        }
        ans.pop_back();
        return ans;

    }
};