#include <bits/stdc++.h> 
using namespace std ;
void deleteM(stack<int>& st,int pos){
   if(pos == 0){
      st.pop() ;
      return ;
   }
   pos -- ;
   int temp = st.top() ;
   st.pop() ;
   deleteM(st,  pos) ;

   // use backtracking for again inserting pop element in stack
   st.push(temp) ;
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int pos = N/2 ;
   deleteM(inputStack,  pos)  ;


   
}