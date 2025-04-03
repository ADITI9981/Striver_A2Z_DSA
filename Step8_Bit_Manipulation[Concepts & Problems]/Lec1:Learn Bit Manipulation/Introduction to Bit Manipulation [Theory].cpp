//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void bitManipulation(int num, int i) {
        int pos=i-1;
        
        int get = (num&(1<<pos))?1:0;
        
        int set = num|(1<<pos);
        
        int clear = num&~(1<<pos);
        
        cout<<get<<" "<<set<<" "<<clear;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
