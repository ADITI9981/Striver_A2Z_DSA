class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;
        
        for (int i = nums2.size() - 1; i >= 0; --i) {
            int num = nums2[i];
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }
            if (st.empty()) {
                nextGreater[num] = -1;
            } else {
                nextGreater[num] = st.top();
            }
            st.push(num);
        }
        
        // Prepare the result for nums1
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }
        
        return result;
    }
};
