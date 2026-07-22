class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> right(n);
        int p = 1;
        for(int i=n-1;i>=0;i--){
            p*= nums[i];
            right[i] = p;
        }
        int left = 1;
        vector<int> ans(n);
        for(int i =0;i<n-1;i++){
            ans[i] = left*right[i+1];
            left *=nums[i];
        }
        ans[n-1]=left;
        return ans;
    }
};