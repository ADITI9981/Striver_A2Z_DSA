class Solution {
public:
    int myAtoi(string s) {
        string result="";
        bool sign=false;
        bool started=false;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '&& !started){
                continue;
            }
            else if((s[i]=='+'||s[i]=='-')&&result.empty()){
                result+=s[i];
                sign=true;
                started=true;
            }
            else if(isdigit(s[i])){
                if (s[i] == '0' && result.empty()) {
                    result="0";
                    started = true; 
                    continue;
                }
                result += s[i];
                started = true;
            }
            else{
                break;
            }
        }
        if (result.empty() || (sign && result.size() == 1)) {
            return 0;
        }

        try {
            long long num = stoll(result); 
            if (num > INT_MAX) return INT_MAX;
            if (num < INT_MIN) return INT_MIN;
            return static_cast<int>(num);
        } catch (out_of_range&) {
            return result[0] == '-' ? INT_MIN : INT_MAX;
        }
    }
};
