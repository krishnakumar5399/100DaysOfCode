class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
         
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>>ans(row,vector<int>(col));
        for(int i = 0;i<col;i++){
            int max = INT_MIN;
            
            
            for(int j =0;j<row;j++){
                if(matrix[j][i] > max){
                    max = matrix[j][i] ;
                }
            }
            
            for(int k = 0;k<row;k++){
                if(matrix[k][i]==-1){
                    matrix[k][i] =max ;
                }
            }
          
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans[i][j] = matrix[i][j] ;
            }
        }
        return ans;
        
    }
};
