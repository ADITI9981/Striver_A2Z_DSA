#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n=nums.size();
            if(n==0) return 0;
            vector<int> temp;
            temp.push_back(nums[0]);
            for(int i=1;i<n;i++){
                if(nums[i]!=nums[i-1]){
                    temp.push_back(nums[i]);
                }
            }
            for (int i = 0; i < temp.size(); i++) {
                nums[i] = temp[i];
            }
            return temp.size();
        }
    };

    int main() {
        int t;
        cin >> t;  // Number of test cases
    
        while (t--) {
            int n;
            cin >> n;  // Size of the array
            vector<int> nums(n);
    
            for (int i = 0; i < n; i++) {
                cin >> nums[i]; // Input elements
            }
    
            Solution obj;
            int newSize = obj.removeDuplicates(nums);
    
            // Print the updated array
            for (int i = 0; i < newSize; i++) {
                cout << nums[i] << " ";
            }
            cout << endl;
        }
        return 0;
    }