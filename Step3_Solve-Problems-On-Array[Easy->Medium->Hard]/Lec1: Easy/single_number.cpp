#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;  // XOR all numbers
        }
        return result;
    }
};

int main() {
    int n;
    cin >> n; // Read size of array
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Read array elements
    }

    Solution obj;
    cout << obj.singleNumber(nums) << endl;

    return 0;
}
