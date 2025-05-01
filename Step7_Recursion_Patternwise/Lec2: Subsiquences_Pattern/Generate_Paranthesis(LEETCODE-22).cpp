class Solution {
public:
  void print(int open, int close, string str, vector<string>& result, int n) {
        if (str.length() == 2 * n) {
            result.push_back(str);
            return;
        }

        if (open < n) {
            print(open + 1, close, str + '(', result, n);
        }

        if (close < open) {
            print(open, close + 1, str + ')', result, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        print(0, 0, "", result, n);
        return result;
    }
};
