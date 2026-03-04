class Solution {
public:
    bool isVowel(char ch)
    {
        ch=tolower(ch);
        if ( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ) return true;

        return false;
    }

    string sortVowels(string s) {
        vector<int>smallAlpha(26,0),bigAlpha(26,0);
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i]))
            {
                char ch=s[i];
                if(ch>='A' && ch<='Z') bigAlpha[ch-'A']++;
                else                   smallAlpha[ch-'a']++;

                s[i]='#';
            }
        }
        string ans="";
        for(int i=0;i<26;i++)
        {
            if(bigAlpha[i]>0)
            {
                while(bigAlpha[i]--)
                ans+='A'+i;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(smallAlpha[i]>0)
            {
                while(smallAlpha[i]--)
                ans+='a'+i;
            }
        }
        int index=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {
                s[i]=ans[index];
                index++;
            }
        }
        return s;

    }
};