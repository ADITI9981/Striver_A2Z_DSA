#include<iostream>
using namespace std;
bool checkArmstrong(int n){
	int sum=0,rev=0,num=n;
	while(num>0)
	{
      int digit = num%10;
	  sum = sum+(digit*digit*digit);
	  num/=10;
	}
	return sum==n;

}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;  // Taking input from user
    checkArmstrong(n);  // Calling function
    return 0;
}