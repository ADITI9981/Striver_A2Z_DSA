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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int maxarea=0;
        int m=matrix[0].size();
        vector<vector<int>> psum(n, vector<int>(m, 0));

        for (int j = 0; j < m; j++) {
            psum[0][j] = matrix[0][j] - '0';
        }
        
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=1;j<n;j++){
                if (matrix[j][i] == '1') {
                    psum[j][i] = psum[j-1][i] + 1;
                } else {
                    psum[j][i] = 0;
                }
            }
        }
        for(int i=0;i<n;i++){
            maxarea=max(maxarea,largestRectangleArea(psum[i]));
        }
        return maxarea;

    }
};
