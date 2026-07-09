class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();   //no or rows
        int m = matrix[0].size(), mid;   // no of columns
        int low = 0, high = n * m - 1;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(matrix[mid/m][mid%m] == target)
            {
                return true;
            }
            else if(matrix[mid/m][mid%m] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return false;
    }
};