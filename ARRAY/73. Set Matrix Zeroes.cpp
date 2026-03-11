class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int n = matrix.size();
       int m = matrix[0].size();
       bool row_first =0;
       bool col_first = 0;

       for(int i=0;i<n;i++){
        if(matrix[i][0]==0){
            col_first = true;
            break;
        }
       }
       for(int i=0;i<m;i++){
        if(matrix[0][i]==0){
            row_first=true;
            break;
        }
       }
       for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
       }
       for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
       }
       if(row_first){
        for(int i=0;i<m;i++){
            matrix[0][i]=0;
        }
       }
       if(col_first){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
       } 


    // int m=matrix.size(),n=matrix[0].size(),col0=1;

    //     for(int i=0;i<m;i++)
    //     {
    //         for(int j=0;j<n;j++)
    //         {
    //             if(matrix[i][j]==0)
    //             {
    //                 //Mark the ith col
    //                 matrix[i][0]=0;
    //                 //Mark the jth row
    //                 if(j!=0)
    //                 matrix[0][j]=0;
    //                 else
    //                 col0=0;
    //             }
    //         }
    //     }

    //     for(int i=1;i<m;i++)
    //     {
    //         for(int j=1;j<n;j++)
    //         {
    //             if(matrix[0][j]==0 || matrix[i][0]==0)
    //             matrix[i][j]=0;  
    //         }
    //     }
    //     if(matrix[0][0]==0)
    //     for(int j=0;j<n;j++) 
    //     matrix[0][j]=0;
    //     if(col0==0)
    //     for(int j=0;j<m;j++) 
    //     matrix[j][0]=0;

    }
};