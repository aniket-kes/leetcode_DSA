class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN;
        int prev_sum = 0;

        for(int i = 0; i < nums.size(); i++){
            prev_sum+=nums[i];
            if(sum < prev_sum){
                sum = prev_sum;
            }
            if(prev_sum < 0){
                prev_sum = 0;
            }
        }
        return sum;
    }
};