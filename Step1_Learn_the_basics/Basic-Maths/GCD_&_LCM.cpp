#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int gcd = 1,lcm;
        // code here
        for(int i=1;i<=min(a,b);i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd = i;
            }
        }
        lcm = (a/gcd)*b;
        return {lcm,gcd};
        
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

