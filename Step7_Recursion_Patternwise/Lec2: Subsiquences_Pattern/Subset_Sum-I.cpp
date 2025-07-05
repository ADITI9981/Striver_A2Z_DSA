class Solution {
    
  public:
    void func(int ind,int sum,vector<int> &arr,int N,vector<int> &subsetsum){
        if(ind==N){
            subsetsum.push_back(sum);
            return;
        }
        func(ind+1,sum+arr[ind],arr,N,subsetsum);
        func(ind+1,sum,arr,N,subsetsum);
    }
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int N = arr.size();
        vector<int> subsetsum;
        func(0,0,arr,N,subsetsum);
        sort(subsetsum.begin(),subsetsum.end());
        return subsetsum;
    }
};
