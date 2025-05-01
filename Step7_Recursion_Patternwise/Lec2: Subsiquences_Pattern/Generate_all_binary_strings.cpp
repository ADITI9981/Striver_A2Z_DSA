//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
    void print(int k,string str){
        if(k==0){
            cout<<str<<" ";
            return;
        }
        if(str.back() == '0'){
            string str1 = str;
            str1.push_back('0');
            
            string str2 = str;
            str2.push_back('1');
            
            print(k-1,str1);
            print(k-1,str2);
        }
        if(str.back() == '1'){
            string str3=str;
            str3.push_back('0');
            print(k-1,str3);
        }
    }
    vector<string> generateBinaryStrings(int num) {
        int k=num;
        string n1="0";
        print(k-1,n1);
        string n2 = "1";
        print(k-1,n2);
    }
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends
