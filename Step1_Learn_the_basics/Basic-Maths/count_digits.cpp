/*Problem statement
You are given a number ’n’.
Find the number of digits of ‘n’ that evenly divide ‘n’.

Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.

Example:
Input: ‘n’ = 336

Output: 3

Explanation:
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.*/

#include<iostream>
using namespace std;
int countDigits(int n){
    int count=0,num=n;
    while(num>0){
        int digit = num%10;
        if(digit!=0 && n%digit == 0)
        {
            count++;
        }
        num/=10;
    }
    return count;
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;  // Taking input from user
    countDigits(n);  // Calling function
    return 0;
}