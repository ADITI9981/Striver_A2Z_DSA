//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string postToInfix(string exp) {
        stack<string> st;
        int i=0;
        int n=exp.size();
        
        while(i<n){
            if(isalnum(exp[i])){
                st.push(string(1,exp[i]));
            }
            else{
                string t2=st.top();
                st.pop();
                string t1=st.top();
                st.pop();
                string con=('('+t1+exp[i]+t2+')');
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
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    fclose(stdout);

    return 0;
}

// } Driver Code Ends
