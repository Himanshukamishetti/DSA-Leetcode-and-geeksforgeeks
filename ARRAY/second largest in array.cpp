class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        if(arr.size()==0) return -1;
        int max=INT_MIN,secondMax;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
            {
               secondMax=max;
               max=arr[i];
            }
            else if(arr[i]<max && secondMax<arr[i])
            {
                secondMax=arr[i];
            }
        }
        if(secondMax==max || secondMax==INT_MIN) return -1;
        return secondMax;

    }
};