class Solution {
public:
    int minn(vector<int>& arr){
        int min=INT_MAX;
        for(int val:arr){
            if(val<min){
                min=val;
            }
        }
        return min;
    }
    int maxn(vector<int>& arr){
        int max=INT_MIN;
        for(int val:arr){
            if(val>max){
                max=val;
            }
        }
        return max;
    }
    bool possible(vector<int>& arr,int day,int m,int k){
        int count=0;
        int consecutive=0;
        for(int val:arr){
            if(val<=day){
                consecutive++;
                if(consecutive==k){
                    count++;
                    consecutive=0;
                }
            }
            else{
                consecutive=0;
            }

            if(count>=m){
                return true;
            }
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*(long long)k>n){
            return -1;
        }
        int low=minn(bloomDay);
        int ans=INT_MAX;
        int high=maxn(bloomDay);
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)==true){
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
