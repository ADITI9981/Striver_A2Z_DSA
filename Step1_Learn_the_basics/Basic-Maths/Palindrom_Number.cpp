/*Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 */
#include<iostream>
#include <climits>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            if(x < 0) return false;
            int rev=0,num=x;
            while(num!=0){
                int digit = num%10;
                if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
                if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;
    
                rev = rev*10+digit;
                num/=10;
            }
            return x==rev;
        }
    };

    int main() {
        int n;
        Solution obj;
        cout << "Enter the value of n: ";
        cin >> n;  // Taking input from user
        obj.isPalindrome(n);  // Calling function
        return 0;
    }