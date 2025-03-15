class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                return i; // Return the index of the target
            }
        }
        
        return -1;
    }
};
