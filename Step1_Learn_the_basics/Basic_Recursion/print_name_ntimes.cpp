//GFG GFG GFG GFG GFG GFG 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void printGfg(int N) {
        if(N==0) return ;
        printGfg(N-1);
        cout<<"GFG"<<" ";
    }
};



//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printGfg(N);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends