// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code here
        sort(arr.begin(),arr.end());
        int n  = arr.size();
        int i = 0 , j = n-1;
        while(i<j){
            long long int mul = 1LL * arr[i]*arr[j];
            if(mul == x){
                return true;
            }
            else if(mul<x){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};