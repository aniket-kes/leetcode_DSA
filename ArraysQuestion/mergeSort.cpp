class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> ans(m + n);
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                ans[k] = nums1[i];
                i++; k++;
            }
            else{
                ans[k]  = nums2[j];
                j++; k++;
            }
        }

        while(i<m){
            ans[k] = nums1[i];
            k++; i++;
        }

        while(j<n){
            ans[k] = nums2[j];
            k++; j++;
        }
        
        for(int a = 0; a < ans.size(); a++){
            nums1[a] = ans[a];
        }
    }
};
