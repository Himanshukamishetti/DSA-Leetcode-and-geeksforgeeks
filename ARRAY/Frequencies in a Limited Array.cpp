class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int i , j;
        
        int n = arr.size();
        
        for(i=0;i<n;){
            if(arr[i]>0 && arr[i]<=n){
                j=arr[i]-1;
                
                if(arr[j]<=0){
                    arr[i]=0;
                    arr[j]--;
                    i++;
                }
                else{
                    swap(arr[j],arr[i]);
                    arr[j]=-1;
                }
            }
            else if(arr[i]>n){
                arr[i]=0;
                i++;
            }
            else{
                i++;
            }
        }
        for(i=0;i<n;i++){
            arr[i]=-arr[i];
        }
        
        return arr;
    }
};
