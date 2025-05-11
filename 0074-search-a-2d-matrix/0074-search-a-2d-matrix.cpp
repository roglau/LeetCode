class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size() - 1;
        int row = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (matrix[m][0] == target) return true;
            if (matrix[m][0] < target) {
                row = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        if (row == -1) return false;
        l = 0;
        r = matrix[row].size() - 1;

        while(l <= r){
            int m = ((l+r)/2);
            if(target == matrix[row][m]){
                // cout << "found at " << row << "," << m << endl;
                return true;
            }else if(target > matrix[row][m]){
                l = m + 1;
            }else if(target < matrix[row][m]){
                r = m - 1;
            }
        }

        return false;
    }


};