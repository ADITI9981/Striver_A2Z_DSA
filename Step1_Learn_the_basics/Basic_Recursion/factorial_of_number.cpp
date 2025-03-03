/*A number n is called a factorial number if it is the factorial of a positive integer. For example,
 the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.

Examples:

Input: n = 3
Output: 1 2
Explanation: The first factorial number is 1 which is less than equal to n.
 The second number is 2 which is less than equal to n,but the third factorial number is 6 which is greater than n. 
 So we print only 1 and 2.*/
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    void findFactorials(long long n, long long fact, long long i, vector<long long> &result) {
        if (fact > n) return;  // Base case: Stop if factorial exceeds n
        result.push_back(fact);
        findFactorials(n, fact * (i + 1), i + 1, result);  // Recursive call for next factorial
    }

    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        findFactorials(n, 1, 1, result);  // Start with 1! = 1
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends