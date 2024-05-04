
#include<bits/stdc++.h>
using namespace std;

void insertSortedStack(stack<int> &stack, int data){
	if(stack.empty() || stack.top()<= data){
		stack.push(data) ;
		return;
	}

	int temp = stack.top() ;
	stack.pop() ;
	insertSortedStack(stack, data) ;

	stack.push(temp) ;



}


void sortStack(stack<int> &stack)
{
	// Write your code here
	// base case;
	if(stack.empty()){
		return;
	}

	int temp = stack.top() ;
	stack.pop() ;

	// recursive call
	sortStack(stack) ;

	// to help of backtracking poped element insert into stack again.
	insertSortedStack(stack,temp) ;
}
int main() 
{
     
     
  return 0;
}