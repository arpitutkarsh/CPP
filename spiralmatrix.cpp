class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row * col;
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;
        vector<int> ans;
        while(count < total){
            //printing the starting Row
            for(int i = startingCol; count < total && i <= endingCol; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            //printing the ending column
            for(int i = startingRow; count < total && i <= endingRow; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            //printing ending Row
            for(int i = endingCol; count < total && i >= startingCol; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            //printing the starting column
            for(int i = endingRow; count < total && i >= startingRow; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
        
    }
};