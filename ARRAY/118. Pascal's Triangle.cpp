class Solution {
public:
    vector<int>generateRow(int n)
    {
        long temp=1;
        vector<int>ans(n+1,1);
        for(int i=1;i<n;i++)
        {
            temp=(ans[i-1]*(n-i+1))/i;
            ans[i]=temp;
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>matrix;
        for(int i=0;i<numRows;i++)   matrix.push_back(generateRow(i));
        return matrix;

    }
};