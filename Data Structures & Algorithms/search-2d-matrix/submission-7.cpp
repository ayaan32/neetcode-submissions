class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int R = matrix.size(), C = matrix[0].size();
        int l=0, r=R*C-1;
        while(l<=r) {
            int m = l + (r-l)/2;
            if(matrix[m/C][m%C] < target) {
                l=m+1;
            } else if(matrix[m/C][m%C] > target) {
                r=m-1;
            } else {
                return true;
            }
        }
        return false;
    }
};
