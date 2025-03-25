//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string postToPre(string post_exp) {
        int n=post_exp.size();
        int i=0;
        stack<string> st;
        while(i<n){
            if(isalnum(post_exp[i])){
                st.push(string(1,post_exp[i]));
            }
            else{
                string t1=st.top();st.pop();
                string t2=st.top();st.pop();
                string con= (post_exp[i]+t2+t1);
                st.push(con);
            }
            i++;
        }
        return st.top();
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends
