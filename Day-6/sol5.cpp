class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n ) 
    { 
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int temp= matrix[i][j];
                matrix[i][j]= matrix[j][i];
                matrix[j][i]= temp;
            }
        }
        for(int t=0;t<(n/2);t++){
            for (int k=0;k<n;k++){
                int temp = matrix[t][k];
                matrix[t][k] = matrix[n-1-t][k];
                matrix[n-1-t][k] = temp;
            }
        }
    } 
};
