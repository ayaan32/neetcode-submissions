class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = -1;
        for(int i=0;i<m;i++) {
            if(matrix[i][n-1]>=target) {
                row = i;
                break;
            }
        }
        if(row == -1) return false;
        for(int i=0; i<n; i++) {
            if(matrix[row][i]==target) return true;
        }
        return false;
    }
};
