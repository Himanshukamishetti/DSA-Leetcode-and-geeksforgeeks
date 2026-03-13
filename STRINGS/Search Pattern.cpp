class Solution {
  public:
      vector<int>longestPrefixSuffix(string s)
    {
        int prefix=0,suffix=1,n=s.size();
        vector<int>lps(n,0);
        while(suffix<n)
        {
            if(s[prefix]==s[suffix])
            {
                lps[suffix]=prefix+1;
                suffix++;
                prefix++;
            }
            else
            {
                if(prefix==0) 
                suffix++;
                else          
                prefix=lps[prefix-1];
            }
        }
        return lps;
    }
    
    vector<int>strStr(string haystack, string needle) 
    {
        int m=haystack.size(),n=needle.size(),first=0,second=0;
         
        vector<int>lps=longestPrefixSuffix(needle);
        vector<int>ans;
        while(first<m )
        {
            if(haystack[first]==needle[second])
            {
                first++;
                second++;
            }
            else
            {
                if(second==0) 
                first++;
                else     
                second=lps[second-1];
            }
            if(second==n) 
            {
                ans.push_back(first-second);
                second=lps[second-1];
            }
        }
        return ans;
    }

    vector<int> search(string &pat, string &txt) {
        // code here
        vector<int>ans=strStr(txt,pat);
        return ans;


    }
};