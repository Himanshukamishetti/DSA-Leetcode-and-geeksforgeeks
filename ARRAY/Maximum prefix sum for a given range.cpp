class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        // code here.
        int start=0,end=leftIndex.size();
        vector<int>ans;
        while(start<end)
        {
            int startIndex=leftIndex[start],endIndex=rightIndex[start];
            int sum=0,maxPrefixSum=INT_MIN;
            for(int i=startIndex;i<=endIndex;i++)
            {
                sum+=arr[i];
                maxPrefixSum=max(maxPrefixSum,sum);
            }
            ans.push_back(maxPrefixSum);
            
            start++;
        }
        return ans;

    }
};