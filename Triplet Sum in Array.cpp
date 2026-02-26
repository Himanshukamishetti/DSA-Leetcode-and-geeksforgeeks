class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size();
        sort(arr.begin() , arr.end());

        for(int i=0;i<n;i++){
            int y = target - arr[i];
            int low = i+1, high = n-1;
            
            while(low<high){
                if(arr[low]+arr[high] == y){
                    return 1;
                }else if(arr[low]+arr[high]>y){
                    high--;
                }else if(arr[low]+arr[high]<y){
                    low++;
                }else{
                    return true;
                }
            }

        }
        return false;
    }
};