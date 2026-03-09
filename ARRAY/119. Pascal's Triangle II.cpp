class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1,1);
        long temp=1;
        for(long i=1;i<rowIndex;i++)
        {
            temp=(ans[i-1]*(rowIndex-i+1))/i;
            ans[i]=temp;
        }
        return ans;
  
    }
};