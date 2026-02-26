// User function Template for C++

bool find4Numbers(int A[], int n, int X) {
    sort(A,A+n);
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int l=j+1,r=n-1;
            int sum = A[i]+A[j];
            while(l<r){
                int tot = A[l]+A[r]+sum;
                if(tot == X){
                    return 1;
                }
                else if(tot<X){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
    }
    return 0;
}