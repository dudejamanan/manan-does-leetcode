class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s[s.size()-1]==' '){
            s.pop_back();
        }
        reverse(s.begin(),s.end());
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                break;
            }
            count++;
        }
        return count;
    }
};