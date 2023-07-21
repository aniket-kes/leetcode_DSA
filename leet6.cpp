class Solution {
private:
    int first(vector<int>& nums, int target, int size){
        int s = 0, e = size-1;
        int ans = -1;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(target == nums[mid]){
                ans = mid;
                e = mid - 1;
            }
            else if(target > nums[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    int last(vector<int>& nums, int target, int size){
        int s = 0, e = size-1;
        int ans = -1;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(target == nums[mid]){
                ans = mid;
                s = mid + 1;
            }
            else if(target > nums[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();

        vector<int>p;
    
        p.push_back(first(nums, target, size));
        p.push_back(last(nums, target, size));
        return p;
    }
};
