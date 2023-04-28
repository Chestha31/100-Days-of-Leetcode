class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   int n = matrix.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            else{
                for(int k=n-1;k>=0;k--){
                    ans.push_back(matrix[i][k]);
                }
            }
        }
        return ans;// code here
    }
};
