#include<bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   int one = 0 ;
   int zero = 0 ;
   int two = 0 ;
   for(int i = 0 ;i<n;i++){
      if(arr[i] == 0){
         zero++;
      }
      else if(arr[i] == 1){
         one++;
      }
      else{
         two++ ;
      }
   }
   
   for(int i = 0 ;i<zero ;i++){
      arr[i] = 0 ;
   }
   for(int i =  zero ;i<one+zero ;i++ ){
      arr[i] = 1 ;
   }
   for(int i = one+zero ;i<two+one+zero ;i++){
      arr[i] = 2 ;
   }
   
}
int main() 
{
     
     
  return 0;
}