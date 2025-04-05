class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int subset=1<<nums.size();
        for(int i=0;i<subset;i++){
            vector<int> s;
            for(int j=0;j<31;j++){
                if(i&(1<<j)){
                    s.push_back(nums[j]);
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};
