class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for(int i=0;i<nums1.size();i++){
            int element = nums1[i];
            bool found = false;
            int nextGreater = -1;
            for(int j=0;j<nums2.size();j++){
                if (nums2[j] == element) found = true;
                if (found && nums2[j] > element) {
                    nextGreater = nums2[j];
                    break;
                }
            }
            nums3.push_back(nextGreater);

        }
        return nums3;
    }
};