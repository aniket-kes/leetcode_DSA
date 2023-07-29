class Solution {
public:
    bool isPossible(vector<int>& weights, int n, int mid, int days){
        int pageCount = 0;
        int day = 1;

        for(int i = 0; i < n; i++){
            if(pageCount + weights[i] <= mid){
                pageCount+=weights[i];
            }
            else{
                day++;
                if(day > days || weights[i] > mid){
                    return false;
                }
                pageCount = weights[i];
            }
        }
        return true;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int sum = 0;
        
        for(int i = 0; i < weights.size(); i++){
            sum+=weights[i];
        }
        int e = sum;
        int mid = s + (e - s)/2;
        int ans = -1;
        
        while(s<=e){
            if(isPossible(weights, weights.size(), mid, days)){
                ans = mid;
                e = mid -1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};
