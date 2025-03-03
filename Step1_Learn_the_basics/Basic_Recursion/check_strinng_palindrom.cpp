#include<iostream>
using namespace std;
class Solution {
    public:
         bool helper(string &s, int i) {
            if (i >= s.length() / 2) return true; 
            if (s[i] != s[s.length() - 1 - i]) return false; 
            return helper(s, i + 1); 
        }
    
      public:
        bool isPalindrome(string s) {
             string filtered = "";
            for (char c : s) {
                if (isalnum(c)) {
                    filtered += tolower(c);
                }
            }
            return helper(filtered, 0);
        }
    };
    int main() {
        Solution sol;
        string s;
        getline(cin, s);  // Take full phrase input
        
        if (sol.isPalindrome(s))
            cout << "Palindrome" << endl;
        else
            cout << "Not a Palindrome" << endl;
    
        return 0;
    }