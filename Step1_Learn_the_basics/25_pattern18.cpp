/*Problem statement
Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.

An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.

For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.

Example:
Input: ‘N’ = 3

Output: 
C
C B 
C B A*/
#include<iostream>
using namespace std;
void alphaTriangle(int n) {
    for(int i=0;i<n;i++){
        char ch = 'C';
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;  // Taking input from user
    alphaTriangle(n);  // Calling function
    return 0;
}