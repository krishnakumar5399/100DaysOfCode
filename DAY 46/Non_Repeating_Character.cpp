#include<bits/stdc++.h>
using namespace std;
    char nonrepeatingCharacter(string S)
    {
       
       // create mapping
       map<char,int>mapping ;
       for(int i = 0 ;i<S.length();i++ ){
           mapping[S[i]]++;
       }
       
       for(int i = 0 ;i < S.length() ;i++){
           if(mapping[S[i]] == 1){
               return S[i] ;
           }
       }
       return '$' ;
       
    }
int main() 
{
    string s = "hello" ;
    cout<<nonrepeatingCharacter(s)<<endl;
     
     
  return 0;
}