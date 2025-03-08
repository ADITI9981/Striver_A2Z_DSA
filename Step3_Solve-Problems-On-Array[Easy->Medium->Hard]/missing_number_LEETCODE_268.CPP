#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n=nums.size();
            int expected=(n*(n+1))/2;
            int actual=0;
            for(int num:nums){
                actual+=num;
            }
            return expected-actual;
        }
    };

    int main() {
        int t;
        cin >> t;  // Number of test cases
        
        while (t--) {
            int n;
            cin >> n;  // Number of elements (size of array)
            
            vector<int> nums(n);
            for (int i = 0; i < n; i++) {
                cin >> nums[i];  // Input array elements
            }
            
            Solution obj;
            cout << obj.missingNumber(nums) << endl;  // Output the missing number
        }
    
        return 0;
    }