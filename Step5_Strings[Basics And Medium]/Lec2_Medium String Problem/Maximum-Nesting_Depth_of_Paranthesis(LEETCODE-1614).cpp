class Solution {
public:
    int maxDepth(string s) {
        int open=0;
        int result=0;
        for(int ch:s){
            if(ch=='('){
                open++;
            }
            else if(ch==')'){
                open--;         
            }
            result=max(result,open);
        }
        return result;
    }
};
