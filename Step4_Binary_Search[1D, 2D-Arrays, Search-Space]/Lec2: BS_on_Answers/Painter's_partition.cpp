int sumn(vector<int>& arr){
    int sum=0;
    for(int val:arr){
        sum+=val;
    }
    return sum;
}

int boardscount(vector<int>&arr,int mid){
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
int findLargestMinDistance(vector<int> &boards, int k)
{
    int low=*max_element(boards.begin(),boards.end());
    int high=sumn(boards);
    while(low<=high){
        int mid=(low+high)/2;
        if(boardscount(boards,mid)>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
