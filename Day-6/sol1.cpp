class Solution {
  public:
    int sumOfMatrix(int n, int m, vector<vector<int>> Grid) {
        int sum =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=Grid[i][j];
            }
        }
        return sum;// code here
    }
};
