class Solution {
public:
    void rotate(vector<int>& v, int k) {
        k = k% (int)v.size();
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
    }
};