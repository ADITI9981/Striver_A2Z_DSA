class Solution {
public:
    int maxn(vector<int>& arr){
        int max=INT_MIN;
        for(int val:arr){
            if(val>max){
                max=val;
            }
        }
        return max;
    }
    bool possible(vector<int>& arr,int mid,int thres){
        long long total=0;
        for(int val:arr){
            if(val==0){
                continue;
            }
            total+=ceil((double)val/mid);
        }
        if(total<=thres){
            return true;
        }
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        if(n>threshold) return -1;
        int low=1;
        int ans=INT_MAX;
        int high=maxn(nums);
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(nums,mid,threshold)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
