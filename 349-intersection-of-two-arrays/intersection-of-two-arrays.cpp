class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int x: nums1){
            for(int y: nums2){
                if(x==y){
                    v.push_back(x);
                }
            }
        }
        unordered_set<int> s(v.begin(),v.end());
        v.clear();
        for(int x:s){
            v.push_back(x);
        }
        return v;
    }
};