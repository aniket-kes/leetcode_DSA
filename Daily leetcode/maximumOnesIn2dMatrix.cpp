class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int count = 0, index = 0, maxi = 0;

        for(int i = 0; i < r; i++){
            count = 0;
            for(int j = 0; j < c; j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > maxi){
                index = i;
            }
            maxi = max(count, maxi);
        }
        return {index, maxi};
    }
};