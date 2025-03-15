class Solution {
public:
    
    int maxelement(vector<int>& arr){
        int maxv=INT_MIN;
        for(int val:arr){
            if(val>maxv){
                maxv=val;
            }
        }
        return maxv;
    }

    long long totaltime(vector<int>& arr,int mid){
        long long totalhrs=0;
        for(int val:arr){
            totalhrs+=(long long)ceil((double)val/mid);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int ans= INT_MAX;
        int high=maxelement(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long total=totaltime(piles,mid);
            if(total<=h){
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
