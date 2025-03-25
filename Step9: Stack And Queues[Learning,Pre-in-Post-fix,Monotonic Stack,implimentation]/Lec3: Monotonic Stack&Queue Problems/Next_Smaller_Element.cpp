vector<int> Solution::prevSmaller(vector<int> &A) {
        stack<int> st;
        int n=A.size();
        vector<int> result(n);
        for (int i =0 ; i < n; i++) {
            int num = A[i];
            while (!st.empty() && st.top() >= num) {
                st.pop();
            }
            if (st.empty()) {
                result[i] = -1;
            } else {
                result[i] = st.top();
            }
            st.push(num);
        }
        return result;
        
}

