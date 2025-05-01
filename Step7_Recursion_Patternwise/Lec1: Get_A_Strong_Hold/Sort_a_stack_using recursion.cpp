//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);

cout << "~" << "\n";
}
}
// } Driver Code Ends


void SortedStack ::sort() {
    int x;
    stack<int> st;
    while(!s.empty()){
        x=s.top();
        s.pop();
        while(!st.empty() && st.top()>x){
            int y=st.top();
            st.pop();
            s.push(y);
        }
        st.push(x);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
