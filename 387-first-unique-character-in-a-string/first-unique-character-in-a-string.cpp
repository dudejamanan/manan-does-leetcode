class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for(char c: s){
            freq[c]++;
        }
        char ch;
        for(char c: s){
            if(freq[c]==1){
                ch = c;
                break;
            }
        }
        for(int i=0;i<s.size();i++){
            if (ch==s[i]){
                return i;
            }
        }
        return -1;
    }
};