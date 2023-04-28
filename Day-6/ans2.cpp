class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int sum_lower=0;
        int sum_upper = 0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<=j){
                    sum_upper += matrix[i][j];
                }
                if(j<=i){
                    sum_lower += matrix[i][j];
                }
            }
        }
        ans.push_back(sum_upper);
        ans.push_back(sum_lower);
        return ans;// code here
    }
};
