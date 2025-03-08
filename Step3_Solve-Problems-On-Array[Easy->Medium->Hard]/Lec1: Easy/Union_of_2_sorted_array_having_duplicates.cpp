//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
           int left=0;
           int right=0;
           vector<int> temp;
           int n1=a.size();
           int n2=b.size();
           while(left<n1&&right<n2){
               if(a[left]<b[right]){
                   if(temp.empty() || temp.back()!=a[left]){
                   temp.push_back(a[left]);
                   }
                   left++;
               }
               else if(a[left]>b[right]){
                   if(temp.empty() || temp.back()!=b[right])
                   temp.push_back(b[right]);
                   right++;
               }
               else{
                   if(temp.empty() || temp.back()!=a[left]){
                   temp.push_back(a[left]);
                   }
                   left++;
                   right++;
               }
           }
           while(left<n1){
               if(temp.empty() || temp.back()!=a[left]){
                   temp.push_back(a[left]);
                   }
                   left++;
           }
           while(right<n2){
              if(temp.empty() || temp.back()!=b[right])
                   temp.push_back(b[right]);
                   right++;
           }
           return temp;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends