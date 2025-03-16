    int sumn(vector<int>& arr){
        int sum=0;
        for(int val:arr){
            sum+=val;
        }
        return sum;
    }
int countstudent(vector<int>&arr,int mid,int n){
    int pages=0;int stu=1;
    for(int i=0;i<n;i++){
        if(arr[i]+pages>mid){
            stu++;
            pages=arr[i];

        }
        else{
            pages+=arr[i];
        }
    }
    return stu;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=sumn(arr);
    while(low<=high){
        int mid=(low+high)/2;
        if(countstudent(arr,mid,n)>m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
