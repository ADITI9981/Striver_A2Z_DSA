class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for(char i: s){
            if(i=='('||i=='{'||i=='['){
                s1.push(i);
            }
            else{
                if(s1.empty()){
                    return false;
                }
                char top = s1.top();
                if((i == ')' && top == '(') || 
                   (i == '}' && top == '{') || 
                   (i == ']' && top == '[')) {
                    s1.pop();
                }
                else {
                    return false;
                }
            }
        }
        return s1.empty();

    }
};
