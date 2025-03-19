class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int currentval=0;
        int prevval=0;
        int total=0;
        for(int i=s.size()-1;i>=0;i--){
            currentval=romanMap[s[i]];
            if(currentval<prevval){
                total-=currentval;
            }
            else{
                total+=currentval;
            }
            prevval=currentval;
        }
        return total;
    }
};
