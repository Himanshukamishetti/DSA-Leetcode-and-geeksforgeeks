class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i=0,j=0,m=a.size(),n=b.size(),x;
        vector<int>ans;
        while(i<m && j<n)
        {
            if(a[i]<b[j])      
            x=a[i++];
            else if(a[i]>b[j]) 
            x=b[j++];
            else{
                x=a[i];
                i++;
                j++;
            }
            if(ans.empty() || ans.back()!=x)
            ans.push_back(x);
        }
        while(i<m)
        {
            x=a[i++];
            if(ans.empty() || ans.back()!=x)
            ans.push_back(x);
        }
        while(j<n){
           x=b[j++];
           if(ans.empty() || ans.back()!=x)
           ans.push_back(x);
        }
        return ans;
    }
};

    