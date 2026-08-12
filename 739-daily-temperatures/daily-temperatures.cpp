class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int t = temperatures.size();
        vector<int> v(t,0);
        stack <int> s;
        v[0]=0;
        for(int i=t-1;i>=0;i--){
            while(!s.empty() && temperatures[i]>=temperatures[s.top()]){
                s.pop();
                v[i]=0;
            }
            if(!s.empty()){
                v[i]=s.top()-i;
            }
            s.push(i);

        }

        return v;
    }
};