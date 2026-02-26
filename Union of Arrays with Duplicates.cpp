class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int>unique;
        unique.insert(a.begin(),a.end());
        unique.insert(b.begin(),b.end());
        vector<int>ans(unique.begin(),unique.end());
        return ans;
        
        

    }
};