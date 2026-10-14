class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        nums1.clear();
        nums2.clear();
        for(int x:s1){
            nums1.push_back(x);
        }
        for(int y:s2){
            nums2.push_back(y);
        }
        vector<int> v;
        for(int x:nums1){
            for(int y:nums2){
                if(x==y){
                    v.push_back(x);
                }
            }
        }
        return v;
    }
};