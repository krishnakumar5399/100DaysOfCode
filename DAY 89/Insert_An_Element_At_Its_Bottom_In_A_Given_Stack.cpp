#include<bits/stdc++.h>
using namespace std;

void pushBottom(stack<int> & st ,int x){
    if(st.empty()){
        st.push(x) ;
        return;
    }
    int temp = st.top() ;
    st.pop() ;
    pushBottom(st,x) ;
    st.push(temp) ;
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    pushBottom(myStack,  x) ;
    return myStack ;

}

int main() 
{
     
     
  return 0;
}