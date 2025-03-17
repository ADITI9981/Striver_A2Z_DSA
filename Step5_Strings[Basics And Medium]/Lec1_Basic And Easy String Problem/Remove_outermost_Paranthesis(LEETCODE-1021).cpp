class Solution {
public:
    string removeOuterParentheses(string s) {
        int present=0;
        string result;
        for(char str:s){
            if(str=='('){
                if(present>0){
                result.push_back(str);
               }
                present++;
            }
            else if(str==')'){
                present--;
                if(present>0){
                    result.push_back(str);
                }
            }
        }
        return result;
    }
};
