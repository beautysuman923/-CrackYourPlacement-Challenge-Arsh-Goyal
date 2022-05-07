class Solution {
public:
    /*In this problem ,we will use the approach in which we will make a variable as 0 if any of the first row is 0,
    then we will traverse through the whole array and if any of the element is equal to 0 ,
    we will make its first row same column and same row first column value as 0, 
    then again when we will traverse from last and we will convert every element to 0 whose any of the row or column is zero,
    then at last we will check the variable and make that first cell 0,if the value of variable will be zero*/
    
   void setZeroes(vector<vector<int> > &matrix) {
    int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0) matrix[i][0] = 0;
    }
}
        
        
};
