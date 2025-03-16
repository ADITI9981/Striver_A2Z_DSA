class Solution {
public:
    int maxel(vector<vector<int>>&arr,int n,int m,int col){
        int maxval=0, index=-1;
        for(int i=0;i<n;i++){
            if(arr[i][col]>maxval){
                maxval=arr[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxelement=maxel(mat,n,m,mid);
            int left=mid-1>=0 ? mat[maxelement][mid-1]:-1;
            int right=mid+1<m ? mat[maxelement][mid+1]:-1;
            if(mat[maxelement][mid]>left&&mat[maxelement][mid]>right){
                return{maxelement,mid};
            }
            else if(mat[maxelement][mid]<left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return {-1,-1};
    }
};
