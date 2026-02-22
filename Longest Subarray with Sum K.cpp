class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int maxSubarrayLength=0,prefixSum=0,n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            prefixSum+=arr[i];
            if(prefixSum==k)
            maxSubarrayLength=max(maxSubarrayLength,i+1);
            
            int compliment=prefixSum-k;
            if(mpp.find(compliment)!=mpp.end()) 
            maxSubarrayLength=max(maxSubarrayLength,i-mpp[compliment]);
            if(mpp.find(prefixSum)==mpp.end())
            mpp[prefixSum]=i;
        }
        return maxSubarrayLength;

    }
};