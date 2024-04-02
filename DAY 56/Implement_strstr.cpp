#include<bits/stdc++.h>
using namespace std;
int strstr(string s, string x)
{
     //Your code here
     for(int i = 0 ;i<s.length();i++){
         if(s.find(x)  != string :: npos){
             return s.find(x) ;
         }
     }
     return -1 ;
}
int main() 
{
     
     
  return 0;
}