class Solution {
public:
    int sumn(vector<int>& arr){
        int sum=0;
        for(int val:arr){
            sum+=val;
        }
        return sum;
    }
    int subarraysum(vector<int>&arr,int mid){
        int count=1;int last=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]+last>mid){
                count++;
                last=arr[i];
            }
            else{
                last+=arr[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high =sumn(nums);
        while(low<=high){
            int mid=(low+high)/2;
            if(subarraysum(nums,mid)>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
