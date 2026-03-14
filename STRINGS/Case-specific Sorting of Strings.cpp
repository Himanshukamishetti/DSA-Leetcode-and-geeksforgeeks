class Solution {
  public:
    string caseSort(string& s) {
        // code here
        vector<int>smallAlpha(26,0),bigAlpha(26,0);
        string lowercase="",uppercase="";
        for(char ch:s)
        {
            if(ch>='A' && ch<='Z') 
            bigAlpha[ch-'A']++;
            else                   
            smallAlpha[ch-'a']++;
        }
        string ans="";
        for(int i=0;i<26;i++)
        {
            if(bigAlpha[i]>0)
            {
                while(bigAlpha[i]--)
                uppercase+='A'+i;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(smallAlpha[i]>0)
            {
                while(smallAlpha[i]--)
                lowercase+='a'+i;
            }
        }
        
        int index1=0,index2=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch>='A' && ch<='Z') 
            s[i]=uppercase[index1++];
            else                   
            s[i]=lowercase[index2++];
        }
        
        return s;

    }
};