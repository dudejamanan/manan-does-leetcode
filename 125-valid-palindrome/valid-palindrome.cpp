class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        for(int i=0;i<s.size();i++){
            if (isupper(s[i])){
                ss.push_back(tolower(s[i]));
            }
            else if(islower(s[i])){
                ss.push_back(s[i]);
            }
            else if(isalnum(s[i])){
                ss.push_back(s[i]);
            }

        }
        int l = 0;
        int r = ss.size()-1;
        while(l<r){
            if(ss[l]!=ss[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};