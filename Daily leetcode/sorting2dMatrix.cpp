class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>ans;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                ans.push_back(Mat[i][j]);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        int k = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++, k++){
                Mat[i][j] = ans[k];
            }
        }
        return Mat;
    }
};