class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        bool b = true;
        if (x<0){
            b = false;
        }
        if (x>0){
            while(x>0){
                int a = x%10;
                v.push_back(a);
                x/=10;

            }
            for(int i=0;i<v.size();i++){
                if (v[i]!=(v[v.size()-i-1])){
                    b = false;
                    break;
                }
            }
        }
        return b;

    }
};