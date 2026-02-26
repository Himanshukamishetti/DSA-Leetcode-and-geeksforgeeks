

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int>ans;
        int n=arr.size()-1;
        ans.push_back(arr[n]);
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>=ans.back())
            ans.push_back(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};