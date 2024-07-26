class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int diag1 = 0;
       int diag2 = 0;
       for(int i =0; i< mat.size();i++){
            diag1 += mat[i][i];
            diag2 += mat[i][mat.size() - 1 - i];
       } 
       if (mat.size() % 2 != 0){
        int matrix_centre = mat.size() / 2;
        return diag1 + diag2 - mat[matrix_centre][matrix_centre];
       }
       else{
        return diag1 + diag2;
       }
    }
};
