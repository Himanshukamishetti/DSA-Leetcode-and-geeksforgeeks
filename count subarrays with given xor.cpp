class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        int n=arr.size(),prefixXOR=0,count=0;
        for(int i=0;i<n;i++)
        {
            prefixXOR^=arr[i];
            if(prefixXOR==k) count++;
            
            int need=prefixXOR^k;
            if(mpp.find(need)!=mpp.end())
            {
                count+=mpp[need];
            }
            mpp[prefixXOR]+=1;
        }
        return count;

    }
};