class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> s_t;
        unordered_map<char,char> t_s;
        for(int i=0;i<s.size();i++){
            if(s_t.find(s[i])!=s_t.end()){

            if(s_t[s[i]]!=t[i]) return false;
            }
            if(t_s.find(t[i])!=t_s.end()){
            if(t_s[t[i]]!=s[i]) return false;
            }
            s_t[s[i]]=t[i];
            t_s[t[i]]=s[i];
        }
        return true;
    }
};