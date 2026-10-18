class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int R=matrix.size(), C=matrix[0].size();
        int l=0, r=R*C-1;
        while(l<=r) {
            int m = l + (r-l)/2;
            int row = m/C, col=m%C;
            if(matrix[row][col] < target) l=m+1;
            else if(matrix[row][col] > target) r=m-1;
            else return true;
        }
        return false;
    }
};
