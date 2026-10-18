class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = -1;
        for(int i=0; i<matrix.size(); i++) {
            if(target <= matrix[i][matrix[0].size()-1]) {
                row = i;
                break;
            }
        }
        if(row == -1) return false;
        int l=0, r=matrix[0].size()-1, m;
        while(l<=r) {
            m = l + (r-l)/2;
            if(matrix[row][m] < target) l = m+1;
            else if(matrix[row][m] > target) r = m-1;
            else return true;
        }
        return false;
    }
};