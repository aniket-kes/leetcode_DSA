class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int s = 0;
        int e = col - 1;
        while(s < row && e >= 0){
            int index = matrix[s][e];

            if(index == target)
                return 1;
            else if(index > target)
                e--;
            else
                s++;
        }
        return 0;
    }
};