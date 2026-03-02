class Solution {
public:
    vector<int>longestPrefixSuffix(string s)
    {
        int n=s.size();
        vector<int>lps(n,0);
        int prefix=0,suffix=1;
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
                if(prefix!=0)
                {
                    prefix=lps[prefix-1];
                }
                else
                {
                    suffix++;
                }
            }
        }
        return lps;
    }

    bool KMP_MATCH(string a,string b)
    {
        vector<int>lps=longestPrefixSuffix(b);
        int n=a.size(),m=b.size(),first=0,second=0;
        while(first<n && second<m)
        {
            if(a[first]==b[second])
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
        }
        if(second==m) return true;
        return false;
    }

    int repeatedStringMatch(string a, string b) {
        if(a==b) return 1;
        string temp=a;
        int repeat=1;
        while(temp.size()<b.size())
        {
            temp+=a;
            repeat++;
        }

        if(KMP_MATCH(temp,b)) return repeat;
        temp+=a;
        repeat++;
        if(KMP_MATCH(temp,b)) return repeat;

        return -1;
 
    }
};