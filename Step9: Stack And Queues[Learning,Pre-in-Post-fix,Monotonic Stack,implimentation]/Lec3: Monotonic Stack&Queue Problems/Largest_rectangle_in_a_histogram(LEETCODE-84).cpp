class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        int element=0,nse=0,pse=0;
        stack<int> st;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty()&&heights[st.top()]>heights[i]){
                element=st.top();
                st.pop();
                nse=i;
                pse = !st.empty()?st.top():-1;
                maxarea=max(heights[element]*(nse-pse-1),maxarea);
               
            }
            st.push(i);
        }
         while(!st.empty()){
                element=st.top();
                st.pop();
                nse=n;
                pse=!st.empty()?st.top():-1;
                maxarea=max(heights[element]*(nse-pse-1),maxarea);
            }
        return maxarea;
    }
};
