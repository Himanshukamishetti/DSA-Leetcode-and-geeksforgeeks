class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int> prefixsumindex;
        int maxlength =0, sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==0){
                maxlength = i+1;
            }else if(prefixsumindex.find(sum)!=prefixsumindex.end()){
                maxlength = max(maxlength,i-prefixsumindex[sum]);
            }else{
                prefixsumindex[sum] = i;
            }
        }
        return maxlength;
    }
};