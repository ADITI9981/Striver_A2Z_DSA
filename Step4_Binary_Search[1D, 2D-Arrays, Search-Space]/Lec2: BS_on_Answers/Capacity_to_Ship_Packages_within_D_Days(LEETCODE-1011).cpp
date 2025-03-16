class Solution {
public:
    int maxn(vector<int>&arr){
        int maxno=INT_MIN;
        for(int val:arr){
            if(val>maxno){
                maxno=val;
            }
        }
        return maxno;
    }
    int sumn(vector<int>& arr){
        int sum=0;
        for(int val:arr){
            sum+=val;
        }
        return sum;
    }
    int possible(vector<int>&arr,int mid,int days){
        int day=1;int weight=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(weight+arr[i]>mid){
                day+=1;
                weight=arr[i];
            }
            else{
                weight+=arr[i];
            }
        }
        return day;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=maxn(weights);
        int high=sumn(weights);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(weights,mid,days)<=days){
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
