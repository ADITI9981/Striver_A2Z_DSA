class Solution {
public:
    void insert_at_bottom(stack<int> &st, int item) {
        if (st.empty()) {
            st.push(item);
            return;
        }
        int temp = st.top();
        st.pop();
        insert_at_bottom(st, item);
        st.push(temp);
    }

    void Reverse(stack<int> &st) {
        if (st.empty()) {
            return;
        }
        int temp = st.top();
        st.pop();
        Reverse(st);
        insert_at_bottom(st, temp);
    }
};
