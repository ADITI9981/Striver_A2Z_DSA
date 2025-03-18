class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (auto c : s) {
            freq[c]++;
        }
        vector<vector<char>> bucketdata(s.length()+1);
        for(auto [c,f]:freq) bucketdata[f].push_back(c);
        string  result="";
        for(int i=s.length();i>=1;i--){
            for(auto ch:bucketdata[i]){
                result.append(i,ch);
            }
        }
        return result;
    }
};
