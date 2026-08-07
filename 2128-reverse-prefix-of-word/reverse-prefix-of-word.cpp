class Solution {
public:
    string reversePrefix(string word, char ch) {
        string rev = "";
        stack<char> s;
        int count = 0;
        for(int i=0;i<word.size();i++){
      
            s.push(word[i]);
            count++;
            if(word[i]==ch){
                break;
            }

            
            
        }
        if (count == word.size() && word[count-1]!=ch){
            return word;
        }
        while(!s.empty()){
            rev.push_back(s.top());
            s.pop();
        }
        return rev+word.substr(count);
    }
};