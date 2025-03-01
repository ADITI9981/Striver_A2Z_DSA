/*Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * */
#include<iostream>
using namespace std;
void symmetry(int n) {
    int space=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        space += 4;
        cout<<endl;
        
    }
    int sp=4;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int j=0;j<sp;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        space -= 4;
        cout<<endl;
        
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;  // Taking input from user
    symmetry(n);  // Calling function
    return 0;
}