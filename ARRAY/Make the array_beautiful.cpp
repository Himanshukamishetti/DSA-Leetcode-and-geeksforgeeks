// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        // int n = arr.size();
        // vector<int> ans;
        // int i=0;
        // while(i<n){
        //     if(ans.size()==0 || (ans.back()>=0 and arr[i]>=0) || 
        //     (ans.back()<0 and arr[i]<0)){
        //         ans.push_back(arr[i]);
        //     }else{
        //         ans.pop_back();
        //     }
        //     i++;
        // }
        // return ans;
    
        stack<int>st;
        for(int x:arr){
            if(st.empty()) 
            st.push(x);
            else{
                if(x>=0 && st.top()>=0) 
                st.push(x);
                else if(x<0 && st.top()<0) 
                st.push(x);
                else 
                st.pop();
            }}
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};