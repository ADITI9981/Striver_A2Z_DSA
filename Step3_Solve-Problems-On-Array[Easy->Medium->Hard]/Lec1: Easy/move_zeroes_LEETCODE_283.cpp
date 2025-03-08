#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n=nums.size();
            vector<int> temp;
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    temp.push_back(nums[i]);
                }
            }
            while(temp.size()<n)
            {
               temp.push_back(0);
            }
            for(int i=0;i<n;i++)
            {
                nums[i]=temp[i];
            }
        }
    };

    int main() {
        int t;
        cin >> t; 
        
        while (t--) {
            int n;
            cin >> n;
            vector<int> nums(n);
            
            for (int i = 0; i < n; i++) {
                cin >> nums[i]; 
            }
            
            Solution obj;
            obj.moveZeroes(nums);
            
            for (int num : nums) {
                cout << num << " ";
            }
            cout << endl;
        }
        return 0;
    }