class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int p = num.size()-1;
        int carry = 0;
        vector<int> ans;
        while(p>=0 || k>0){
            int numval=0;
            if(p>=0){
                numval=num[p];
            }
            int d = k%10;
            int sum = numval+d+carry;
            int digit = sum%10;
            carry = sum/10;
            ans.push_back(digit);
            
            p--;
            k/=10;
        }
        if(carry>0){
             ans.push_back(carry);
        }
            reverse(ans.begin(),ans.end());
            return ans;
    }
};