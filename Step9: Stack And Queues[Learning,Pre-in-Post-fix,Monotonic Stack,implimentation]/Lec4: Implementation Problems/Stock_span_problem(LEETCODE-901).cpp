class StockSpanner {
public:
    stack<pair<int,int>> st;
    int ind=-1;
    StockSpanner() {
        ind=-1;
    }
    
    int next(int price) {
        ind++;int ans;
        while(!st.empty()&&st.top().first<=price){
            st.pop();
        }
        ans=ind-(st.empty()? -1:st.top().second);
        st.push({price,ind});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
