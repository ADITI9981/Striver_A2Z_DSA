//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int maxval(vector<int>& arr){
        int max=INT_MIN;
        for(int val:arr){
            if(val>max){
                max=val;
            }
        }
        return max;
    }
    int minval(vector<int>& arr){
        int min=INT_MAX;
        for(int val:arr){
            if(val<min){
                min=val;
            }
        }
        return min;
    }
    
    bool possible(vector<int>& arr,int mid,int cows){
        int cow=1; int last=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]-last>=mid){
                cow++;
                last=arr[i];
            }
        }
        if(cow>=cows){
            return true;
        }
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int low=1;
        int ans=-1;
        int high=maxval(stalls)-minval(stalls);
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(stalls,mid,k)==true){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
