class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        } 
        nums.clear();
        for(int i=0;i<freq.size();i++){
            while(freq[i]>0){
                nums.push_back(i);
                freq[i]--;
            }

        } 
    }
};