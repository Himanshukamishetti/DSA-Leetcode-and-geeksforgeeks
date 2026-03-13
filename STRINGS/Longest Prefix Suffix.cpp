class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        int n=s.length();
        int p=0,sf=1,pos=1,count=0;
        while(p<n && sf<n){
            if(s[p]==s[sf]){
                p++;
                sf++;
                count++;
            }
            else{
                p=0;
                pos++;
                sf=pos;
                count=0;
            }
        }
        return count;
    }
};