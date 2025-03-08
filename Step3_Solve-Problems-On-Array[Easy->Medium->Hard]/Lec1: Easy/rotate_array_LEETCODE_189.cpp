#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            k = k % n; 
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());
        }
    };
    
    int main() {
        int t;
        cin >> t; 
        
        while (t--) {
            int n, k;
            cin >> n >> k;
            vector<int> nums(n);
            
            for (int i = 0; i < n; i++) {
                cin >> nums[i]; 
            }
            
            Solution obj;
            obj.rotate(nums, k);
            
            for (int num : nums) {
                cout << num << " ";
            }
            cout << endl;
        }
        return 0;
    }
    