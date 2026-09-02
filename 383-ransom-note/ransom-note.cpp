class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> freq_r;
        for(char c:ransomNote){
            freq_r[c]++;
        }

        unordered_map<char,int> freq_m;
        for(char c: magazine){
            freq_m[c]++;
        }
        bool x = true;
        for(char c: ransomNote){
            if(freq_m[c]<freq_r[c]){
                return false;
            }
        }
        return true;

    }
};