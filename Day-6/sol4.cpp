class Solution{
           public:
           void transpose(vector<vector<int>>& matrix, int n){
                      for(i=0;i<n;i++){
                      for(j=0;j<i;j++){
                                 int temp = matrix[i][j];
                                 matrix[i][j] = matrix[j][i];
                                 matrix[j][i] = temp;
                      }
                      }
           }
};
