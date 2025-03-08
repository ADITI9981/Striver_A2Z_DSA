#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, currentCount = 0;
        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }
        return maxCount;
    }
};

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Size of array
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];  // Input array elements
        }

        Solution obj;
        cout << obj.findMaxConsecutiveOnes(nums) << endl;
    }
    
    return 0;
}
