#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool check(vector<int>& nums) {
            int n=nums.size();
            int count=0;
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    count++;
                }
            }
            if(nums[n-1]>nums[0])
            {
                count++;
            }
            return (count==0||count==1);
        }
    };


int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of array
        vector<int> nums(n);
        
        for (int i = 0; i < n; i++) {
            cin >> nums[i]; // Input array elements
        }

        Solution obj;
        bool result = obj.check(nums);
        
        if (result) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}