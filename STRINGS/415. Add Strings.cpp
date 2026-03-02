class Solution {
public:
    string addStrings(string num1, string num2) {
        int m=num1.length()-1,n=num2.length()-1;
        int carry=0;
        string ans="";
        while(m>=0 && n>=0)
        {
            char ch1=num1[m],ch2=num2[n];
            int sum=(ch1-'0')+(ch2-'0')+carry;
            char ch=char((sum%10)+'0');
            ans+=ch;
            carry=sum/10;
            m--;
            n--;
        }
        while(m>=0)
        {
            char ch1=num1[m];
            int sum=(ch1-'0')+carry;
            char ch=char((sum%10)+'0');
            carry=sum/10;
            ans+=ch;
            m--;
        }

        while(n>=0)
        {
            char ch2=num2[n];
            int sum=(ch2-'0')+carry;
            char ch=char((sum%10)+'0');
            carry=sum/10;
            ans+=ch;
            n--;
        }

        if(carry)
        {
            char ch=carry+'0';
            ans+=ch;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};