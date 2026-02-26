class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        vector<int> ans(arr.size(),0);
        stack<int> s;
        for(int i=0;i<arr.size();i++){
            while(s.size()>0 && arr[s.top()]<=arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i]=i+1;
            }else{
                ans[i]=i-s.top();
            }
            s.push(i);
        }
        return ans;
        
    }
};