class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int n=nums.size();
        int end = n - 1;
        int first = -1;
        int last=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if (target < nums[mid]) {
               end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        start=0;end=n-1;
        while (start <= end) {
           int mid = (start+end)/2;
           if (nums[mid] == target) {
               last = mid;
               start = mid + 1;

            }  
            else if (target < nums[mid]) {
               end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return {first,last};
    }
};
