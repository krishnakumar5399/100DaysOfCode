#include<bits/stdc++.h>
using namespace std;

// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		
		// Constructor
		vector<pair<int,int>>st ;
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(st.empty()){
            pair<int,int> p ;
            p.first = num ;
            p.second = num ;
            st.push_back(p) ;
        }
        else{
            pair<int,int> p ;
            p.first = num ;
            p.second = min(num,st.back().second) ;
            st.push_back(p) ;
            
        }
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty()){
				return -1 ;
			}
			else{
				int val = st.back().first ;
				st.pop_back() ;
				return val ;
			}
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty()){
				return -1 ;
			}
			else{
				return st.back().first ;
			}
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
				if(st.empty()){
				return -1 ;
			}
			else{
				return st.back().second ;
			}
		}
};
int main() 
{
     
     
  return 0;
}